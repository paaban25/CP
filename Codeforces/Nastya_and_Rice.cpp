#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int minWeight=n*fabs(a-b);
        int maxWeight=n*fabs(a+b);
        if (c+d>=minWeight && fabs(c-d)<=maxWeight)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }
    return 0;
}