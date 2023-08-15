#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int money_req=k*w*(w+1)/2;
    if (money_req>n)
    {
        cout<<money_req-n<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
    return 0;
}