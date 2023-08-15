#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        double required=((p+q+r)/2)-(a+b+c);
        if ((required<p-a) || (required<q-b) || (required<r-c ))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}