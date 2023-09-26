#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (i==0)
            {
                
            }
            else{
                if (s[i]=='L' & s[i-1]=='W')
                {
                    k--;
                    s[i]='W';
                }
                else if (s[i]=='W')
                {
                    continue;
                }
                
            }
        }
        
    }
    return 0;
}