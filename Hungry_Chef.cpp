#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        if(n*x>r){
            cout<<-1<<endl;
        }
        else{
            int premium=0,normal=n;
            while(premium*y + normal*x <=r && normal>=0){
                premium++;
                normal--;
            }
            cout<<normal+1<<" "<<premium-1<<endl;
        }
    }
    return 0;
}