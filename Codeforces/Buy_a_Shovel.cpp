#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int i=2,value=k,count=1;
    while (true)
    {
        if(value%10==0){
            cout<<count<<endl;
            break;
        }
        if(value%10==r){
            cout<<count<<endl;
            break;
        }
        value=k*i;
        count++;
        i++;
    }
    
    
    return 0;
}