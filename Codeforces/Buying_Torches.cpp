#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long n1=(k*(y+1)-1)%(x-1)==0?(k*(y+1)-1)/(x-1):(k*(y+1)-1)/(x-1)+1;
        
        cout<<n1+k<<endl;
    }
    return 0;
}