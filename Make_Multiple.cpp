#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b%a==0){
            cout<<"YES"<<endl;
        }
        else{
            int d,r,x;
            d=b/a;
            x=r/(d-1);
            if(x>=0 and d>1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}