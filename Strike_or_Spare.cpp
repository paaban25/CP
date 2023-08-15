#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<1<<" ";
        if (n%2==0)
        {
            cout<<pow(10,n/2)<<endl;
        }
        else{
            cout<<pow(10,(n-1)/2)<<endl;
        }
        
    }
    
    return 0;
}