#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        cout << min({b*(max(x,y)) + a*(max(x,y) - min(x,y)) , b*(min(x,y)) + a*(max(x,y) - min(x,y)) , a*(x+y)}) << '\n' ;
        
    }
    return 0;
}