#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string j,s;
        cin>>j>>s;
        int count=0;
        for (int i = 0; i < j.length(); i++)
        {
            for (int k = 0; k < s.length(); k++)
            {
                if (j[i]==s[k])
                {
                    count++;
                    s[k]='0';
                }
                
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}