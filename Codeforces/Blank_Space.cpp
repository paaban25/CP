#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int count=0,ans=0;
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                count++;
            }
            else{
                ans=max(ans,count);
                count=0;
            }
        }
        cout<<max(count,ans)<<endl;
    }
    return 0;
}