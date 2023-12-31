#include <bits/stdc++.h>
using namespace std;
int countChar(string s,char a){
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==a)
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int extraCount=0,initialCount=0;
        int capital[26],small[26],diff[26];
        for (int i = 0; i < 26; i++)
        {
            capital[i]=countChar(s,char(65+i));
            small[i]=countChar(s,char(97+i));
            diff[i]=fabs(capital[i]-small[i]);
            extraCount+=diff[i]/2;
        }
        for (int i = 0; i < 26; i++)
        {
            initialCount+=min(capital[i],small[i]);
        }
        
        cout<<initialCount+min(k,extraCount)<<endl;

    }
    return 0;
}