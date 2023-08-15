#include <bits/stdc++.h>
using namespace std;
int isSorted(int arr[],int len){
    int count=0;
    for (int i = 0; i < len-1; i++)
    {
        if(arr[i+1]>=arr[i]){
            count++;
        }
    }
    if (count==len-1)
    {
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
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int steps=0;
        if (isSorted(arr,n)==0)
        {
            cout<<0<<endl;
        }
        else{
            int minDiff=INT_MAX;
            for (int i = 0; i < n-1; i++)
            {
                minDiff=min(minDiff,arr[i+1]-arr[i]);
            }
            cout<<(minDiff/2)+1<<endl;
        }
        
        
    }
    return 0;
}
