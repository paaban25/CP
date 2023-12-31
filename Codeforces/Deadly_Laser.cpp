#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        
        if (min(sx-1,m-sy)<=d && min(n-sx,sy-1)<=d)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<m+n-2<<endl;
        }
    }
    return 0;
}