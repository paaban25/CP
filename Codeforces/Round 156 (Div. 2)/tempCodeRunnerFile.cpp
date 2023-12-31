#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string result="";
    while (t--)
    {
        string s;
        cin>>s;
        int pos;
        cin>>pos;
        string final="";
        int n=s.length();
        for (int i = 0; i < n; i++)
        {
            string temp=s.substr(0,s.length()-1);
            s=temp;
            final+=temp;
        }
        result+=final[pos+1];
    }
    cout<<result<<endl;
    return 0;
}