#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    while(m--){
        int l,r;
        cin>>l>>r;
        int count=0;
        for (int i = l; i <=r; i++)
        {
            count+=arr[i];
        }
        if (count==0)
        {
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
        
    }

    return 0;
}