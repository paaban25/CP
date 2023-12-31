#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int n1=n/(1+k+(k*k)+(k*k*k));
        cout<<n1<<" "<<n1*k<<" "<<n1*k*k<<" "<<n1*k*k*k<<endl;
    }
    return 0;
}