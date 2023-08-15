#include<bits/stdc++.h>
using namespace std;
int arr_max(int arr[],int n){
    int maxm=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxm){
            maxm=arr[i];
        }
    }
    return maxm;
    
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int greatest=arr_max(arr,n);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count+=greatest-arr[i];
    }
    cout<<count<<endl;
    return 0;
}