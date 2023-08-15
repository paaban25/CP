#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int minm=min(m,n);
    if (minm%2==0)
    {
       cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}