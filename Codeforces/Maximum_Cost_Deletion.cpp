#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        string s;
        cin>>n>>a>>b;
        cin>>s;
        int m = unique(s.begin(), s.end()) - s.begin();
        cout<<n*a+max((m/2 +1)*b,n*b)<<endl;;
    }
    return 0;
}