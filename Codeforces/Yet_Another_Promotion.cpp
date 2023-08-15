#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int n,m;
        cin>>n>>m;
        int first_day_fare,second_days_fare;
        if (n-1>m)
        {
            first_day_fare=a*m;
        second_days_fare=b*(n-m-1);
        cout<<first_day_fare+second_days_fare<<endl;
        }
        else 
        {
            cout<<n*a<<endl;
        }
        
        
    }
    
    return 0;
}