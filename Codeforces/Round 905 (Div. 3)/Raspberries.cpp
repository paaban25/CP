#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int odd=0,even=0;
        int minToTwo=2,minToThree=3,minToFour=4,minToFive=5;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            arr[i]%2==0?even++:odd++;
            minToTwo = min(minToTwo, 2 - (arr[i] % 2 == 0 ? 2 : arr[i] % 2));
            minToThree = min(minToThree, 3 - (arr[i] % 3 == 0 ? 3 : arr[i] % 3));
            minToFour = min(minToFour, 4 - (arr[i] % 4 == 0 ? 4 : arr[i] % 4));
            minToFive = min(minToFive, 5 - (arr[i] % 5 == 0 ? 5 : arr[i] % 5));

        }
        if (k==2)
        {
            cout<<minToTwo<<endl;
        }
        else if (k==3)
        {
            cout<<minToThree<<endl;
        }
        else if (k==5)
        {
            cout<<minToFive<<endl;
        }
        else{
            int twoSteps;
            if (even==0)
            {
                twoSteps=2;
            }
            else if (even==1)
            {
                twoSteps=1;
            }
            else{
                twoSteps=0;
            }
            cout<<min(twoSteps,minToFour)<<endl;

        }
        
    }
    return 0;
}