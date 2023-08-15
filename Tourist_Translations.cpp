#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string m;
    cin>>m;
    while (t--)
    {
        string s;
        cin>>s;
        string newSTR="";
        for (int i = 0; i < s.length(); i++)
        {
            int digit=int(s[i]);
            // if(s[i]=='?'){
            //     newSTR+='?';
            // }
            // else if (s[i]=='_')
            // {
            //     newSTR+=' ';
            // }
            if(digit>=65 && digit<=90){
                newSTR+=toupper(m[digit-65]);
            }
            else if(s[i]=='_'){
                newSTR+=' ';
            }
            else if(digit>=97 && digit<=122){
                newSTR+=m[digit-97];
            }
            else{
                newSTR+=s[i];
            }

        }
        cout<<newSTR<<endl;
    }
    
    return 0;
}