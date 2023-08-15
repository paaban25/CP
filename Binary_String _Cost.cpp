#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int countzero=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                countzero++;
            }
        }
        if(countzero==0 || countzero==n){
            cout<<0<<endl;
        }
        else{
            cout<<min(a,b)<<endl;
        }
        
    }
    
    return 0;
}