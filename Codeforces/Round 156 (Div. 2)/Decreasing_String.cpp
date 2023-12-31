#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string result="";
    while(t--){
        string s;
        cin>>s;
        int pos;
        cin>>pos;
        string final=s;
        int n=s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (i==s.length()-1)
                {
                    s.erase(i,i);
                    break;
                }
                else{
                    if (s[i]>s[i+1])
                    {
                        s.erase(i,i);
                        break;
                    }
                    else{
                        continue;
                    }
                }
                
            }
            
            final+=s;

        }
        result+=final[pos-1];
        
    }
    cout<<result<<endl;
    return 0;
}