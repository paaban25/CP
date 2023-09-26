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
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int count=0,ans=0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i]-arr[i-1]<=k)
            {
                count++;
            }
            else{
                ans=max(count,ans);
                count=0;
            }
            
        }
        cout<<ans<<endl<<endl;
        
        
        
    }
    return 0;
}