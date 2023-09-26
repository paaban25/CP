#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if ((c+a)%(2*b)==0 || ((2*b-a)%c==0 && 2*b>a) || ((2*b-c)%a==0 && (2*b>c) ))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }  
    }
    return 0;
}