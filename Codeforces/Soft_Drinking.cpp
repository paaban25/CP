#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks=(k*l)/nl,limes=c*d,salt=p/np;
    int minm=min(drinks,salt);
    minm=min(minm,limes);
    cout<<minm/n<<endl;
    return 0;
}