#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int bReq=floor(sqrt(a));
        cout<<bReq-b+3<<endl;
    }
    return 0;
}