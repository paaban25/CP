#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int  n;
        cin>>n;
        int arr[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (long long  i = 0; i < n-1; i++)
        {
            int prev_prod=1,post_prod=1;
            for (int  j = 0; j < i+1; j++)
            {
                prev_prod*=arr[j];
            }
            for (int  j = i+1; j < n; j++)
            {
                post_prod*=arr[j];
            }
            if(prev_prod==post_prod){
                cout<<i+1<<endl;
                break;
            }  
            if(i==n-2){
                cout<<-1<<endl;
            } 
        }    
    }  
    return 0;
}