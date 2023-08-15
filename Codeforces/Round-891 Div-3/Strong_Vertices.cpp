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
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            arr[i]=0;
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            int fromThis=0;
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    continue;
                }
                else{
                    if (a[i]-a[j]>=b[i]-b[j])
                    {
                        fromThis++;
                    }
                }
                
            }
            if(fromThis==n-1){
                count++;
                arr[i]=i+1;
            }
        }
        cout<<count<<endl;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>0){
                cout<<arr[i]<<" ";
            }
        }
        
    }
    return 0;
}