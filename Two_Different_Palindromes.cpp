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
        if ((a+b)%2==0)
        {
            if (a==1 && b==1)
            {
                cout<<"NO"<<endl;
            }
            
            else if (a%2==0 && b%2==0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }    
        }
        else{
            if (a+b==3 )
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }    
        }    
    } 
    return 0;
}