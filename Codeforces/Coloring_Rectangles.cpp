#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int area=n*m;
        if (area%3==0)
        {
            cout<<n*m/3<<endl;
        }
        else{
            cout<<(n*m/3)+1<<endl;
        }
    }
    return 0;
}