#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one=0,zero=0;
        for (int i = 0; i < n; i++)
        {
            s[i]=='1'? one++: zero++;
        }
        if(one%2!=0 && zero%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}