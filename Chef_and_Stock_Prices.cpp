#include<iostream>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while (testcases--)
    {
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        double d=s*(100+c)/100;
        bool flag=0;
        if(d>=a && d<=b){
            flag=1;
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}