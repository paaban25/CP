#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0'){
                zero++;
            }
        }
        if(zero==s.length()-1 || zero==1 ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}