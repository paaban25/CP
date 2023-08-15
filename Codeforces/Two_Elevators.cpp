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
        int time_1=fabs(a-1);
        int time_2=fabs(b-c)+fabs(c-1);
        if(time_1>time_2){
            cout<<2<<endl;
        }
        else if(time_1<time_2){
            cout<<1<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    
    return 0;
}