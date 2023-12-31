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
        int countOdd=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            arr[i]%2!=0?countOdd++:countOdd+=0;
        }
        if (n%2==0)
        {
            if (countOdd==n || countOdd==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if (countOdd==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
    return 0;
}