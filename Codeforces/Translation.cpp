#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    string reverse="";
    for (int i = s.length()-1; i > -1; i--)
    {
        reverse+=s[i];
    }
    (reverse==t)?cout<<("YES"):cout<<("NO");
    return 0;
}