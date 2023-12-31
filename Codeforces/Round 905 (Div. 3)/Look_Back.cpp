#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int steps=0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i]<arr[i-1])
            {
                int currentSteps=ceil(log2(static_cast<double>(arr[i-1]) / arr[i]));
                steps+=currentSteps;
                arr[i]*=pow(2,currentSteps);
                
            }
            
        }
        cout<<steps<<endl;
    }
    return 0;
}