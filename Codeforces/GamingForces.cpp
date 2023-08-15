#include <bits/stdc++.h>
using namespace std;
int maxInArray(int arr[],int len){
    int maxm=0;
    for (int i = 0; i < len; i++)
    {
        maxm=max(maxm,arr[i]);
    }
    return maxm;
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
        int spell1=maxInArray(arr,n);
        cout<<max(maxInArray(arr,n),n)<<endl;
    }
    return 0;
}