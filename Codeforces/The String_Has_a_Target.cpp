#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int index;
        string s;
        cin>>s;
        char lowest='z';
        for (int i = 1; i < n; i++)
        {
            if (int(s[i])<int(lowest))
            {
                lowest=s[i];
                index=i;
            }
        }
        if (int(lowest)<int(s[0]))
        {
            // cout<<
        }
        else{
            // cout<<
        }
        
    }

    
    
    return 0;
}