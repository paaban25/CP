#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i]=1;
        }
        int count=0;
        for (int i = 0; i < m; i++)
        {
            if (2*i+1<n)
            {
                arr[2*i +1]=0;
            }
            else{
                arr[2*count]=0;
                count++;
            }
        }
        int block=0;
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i]==1 && arr[i-1]==0)
            {
                block++;
            }
            
        }
        cout<<block<<endl;
        
    }
    return 0;
}