#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        int temp=max(a,b);
        int maxm=max(temp,c);
        int temp1=min(a,b);
        int minm=min(temp1,c);
        int tot_sum=a+b+c;
        int two_sum=maxm+minm;
        cout<<tot_sum-two_sum<<endl;
    }
    
    return 0;
}