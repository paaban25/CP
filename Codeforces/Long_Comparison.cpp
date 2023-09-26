#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x1,p1;
        cin>>x1>>p1;
        int x2,p2;
        cin>>x2>>p2;
        long long a=x1*pow(10,p1);
        long long b=x2*pow(10,p2);
        
        if (a>b)
        {
            cout<<">"<<endl;
        }
        else if (a<b)
        {
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
        
    }
    return 0;
}