#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (sum==0)
        {
            cout<<"NO"<<endl;
        }
        else if (sum>0)
        {
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]>0)
                {
                    cout<<arr[i]<<" ";
                }
                
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i]<=0)
                {
                    cout<<arr[i]<<" ";
                }
                
            }
        }
        else{
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]<=0)
                {
                    cout<<arr[i]<<" ";
                }
                
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i]>0)
                {
                    cout<<arr[i]<<" ";
                }
                
            }
        }
        
        
        
    }
    return 0;
}