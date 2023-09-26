#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        s.erase(0,(s.length()/2));
        // cout<<s<<endl;
        string ans="";
        for (int i = 0; i < s.length(); i++)
        {
            ans+=s[i];
            ans+='+';
        }
        ans.erase(ans.length()-1);
        cout<<ans<<endl;
    
    return 0;
}