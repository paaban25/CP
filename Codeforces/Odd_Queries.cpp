#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int* arr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        while (q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int sum=0;
            for (int i = 0; i < l-1; i++)
            {
                sum+=arr[i];
            }
            for (int i =r ; i < n; i++)
            {
                sum+=arr[i];
            }
            sum+=(l-r+1)*k;
            if(sum%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
        
    }
    
    return 0;
}