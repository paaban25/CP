#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int sCount[26],tCount[26];
        for (int i = 0; i < 26; i++)
        {
            sCount[i]=0;
            tCount[i]=0;
        }
        
        for (int i = 0; i < s.length(); i++)
        {
            sCount[int(s[i])-65]++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            tCount[int(t[i])-65]++;
        }
        int k=1;
        for (int i = 0; i < 26; i++)
        {
            if (tCount[i]>sCount[i])
            {
                k=0;
            }
            
        }
        if (k==1)
        {
            
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
    return 0;
}