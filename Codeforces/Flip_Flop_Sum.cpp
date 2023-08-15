#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0,one_count=0;
        int cons_neg=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1){one_count++;}
        }
        for (int i = 0; i < n-1; i++)
        {
           if(arr[i]==-1 && arr[i+1]==-1){
            cons_neg++;
           }
        }
        // cout<<cons_neg<<endl;
    if(one_count==n){
        cout<<n-4<<endl;;
    }
    else if(cons_neg==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum+4<<endl;
    }
        
    }
    
    return 0;
}