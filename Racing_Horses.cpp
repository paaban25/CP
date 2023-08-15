#include <bits/stdc++.h>
using namespace std;
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
        int minDiff=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int diff= fabs(arr[i]-arr[j]);
                minDiff=min(diff,minDiff);
            }
            
        }
        cout<<minDiff<<endl;
        
        
    }
    return 0;
}