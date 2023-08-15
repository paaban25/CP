#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    int lower=min(a,b);
    int gcd=lower;
    while(gcd!=1){
        if(a%gcd==0 && b%gcd==0){
            break;
        }
        else
        {
            gcd--;
        }
        
    }
    return gcd;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<GCD(a,b)<<endl;
    }
    return 0;
}