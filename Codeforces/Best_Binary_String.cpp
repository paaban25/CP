#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='?')
            {
                if (i>0)
                {
                    s[i-1]=='1'?s[i]='1':s[i]='0';
                }
                else{
                    s[i]='0';
                }
            }
            
        }
        cout<<s<<endl;
    }
    return 0;
}