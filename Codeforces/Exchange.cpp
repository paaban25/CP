#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if (a>b)
        {
            cout<<1<<endl;
        }
        else{
            int quest=(n%a==0)?n/a:(n/a)+1;
            cout<<quest<<endl;
        }
    }
    return 0;
}