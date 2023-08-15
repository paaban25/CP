#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int space_req=a+b+c;
        if (space_req%d==0)
        {
            cout<<space_req/d<<endl;
        }
        else{
            cout<<(space_req/d)+1<<endl;
        }
        
    }
    
    return 0;
}