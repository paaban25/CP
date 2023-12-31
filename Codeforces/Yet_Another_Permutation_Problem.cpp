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
        int curr=0;
        for (int i =1; i <=n; i+=2)
        {
            for (int j = i; j <= n; j*=2)
            {
                arr[curr]=j;
                curr++;
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    return 0;
}