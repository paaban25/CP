#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ques=0,possibility=1;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='?'){
                ques++;
            }
        }
        if (ques==0)
        {
            if (s[0]=='0')
            {
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
            
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
        {
            if(s[i]!='?'){
                continue;
            }
            else{
                if(i==0){
                    possibility*=9;
                }
                else
                {
                    possibility*=10;
                }
                
            }
        }
        cout<<possibility<<endl;
        }
        
        
    }
    return 0;
}