#include<bits/stdc++.h>
using namespace std;
int is_distinct(int arr[],int len){
    int special=1;
    for (int i = 1; i < len; i++)
    {
        int flag=1;
        for (int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            special++;
        }
    }
    if(special==len){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(is_distinct(arr,n)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    
    
    return 0;
}