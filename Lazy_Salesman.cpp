#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        // sort(begin(arr), end(arr), greater<int>());
        sort(arr, arr+n, greater<int>()) ;
        int sum=0,days=0;
        while(sum<w){
            sum+=arr[days];
            days++;
        }      
        cout<<n-days<<endl;
    }
    return 0;
}