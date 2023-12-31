#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if (s1==s2)
        {
            cout<<0<<endl;
        }
        else{
            if (s1.length()==s2.length())
            {
                int same=0;
                for (int i = 0; i < s1.length(); i++)
                {
                    if (s1[i]==s2[i])
                    {
                        same++;
                    }
                    else{
                        break;
                    }
                }
                cout<<9*(s1.length()-same-1)+fabs(s1[same]-s2[same])<<endl;
            }
            else{
                  cout<<(s2[0]-48)+(s2.length()-1)*9<<endl;
            }
        }
    }
    return 0;
}