#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        if (m==0)
        {
            cout<<(24-h)*60<<endl;
        }
        else{
            cout<<(60-m)+60*(24-h-1)<<endl;
        }
    }
    return 0;
}