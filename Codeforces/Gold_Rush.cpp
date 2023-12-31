#include <bits/stdc++.h>
using namespace std;
int check(int n,int m){
    if (n==m)
    {
        return 1;
    }
    else if (n%3!=0)
    {
        return 0;
    }
    else{
        return ((check(n/3,m))||(check(2*n/3,m)));
    }
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if (check(n,m)==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}