#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if (x>y)
        {
            cout<<x<<endl;
        }
        else if (x<y)
        {
            if (y-x==k)
            {
                cout<<y<<endl;
            }
            else if(y-x>k){
                cout<<2*y-x-k<<endl;
            }
            else{
                cout<<y<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
        
        
    }
    return 0;
}