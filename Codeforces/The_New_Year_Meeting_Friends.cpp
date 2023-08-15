#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxm=max(a,b);
    maxm=max(maxm,c);
    int minm=min(a,b);
    minm=min(minm,c);
    cout<<maxm-minm<<endl;
    return 0;
}