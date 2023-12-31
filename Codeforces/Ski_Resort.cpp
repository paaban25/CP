#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int possible=0;
        int n,k,q;
        cin>>n>>k>>q;
        int available[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            a>q?available[i]=0:available[i]=1;
        }
        
        
    }
    return 0;
}