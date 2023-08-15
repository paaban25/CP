#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int b,c,h;
        cin>>b>>c>>h;
        int fillings=c+h;
        if (b>fillings)
        {
            cout<<2*fillings+1<<endl;
        }
        else{
            cout<<2*b-1<<endl;
        }
        
        
    }
    return 0;
}