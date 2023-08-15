#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        int l,r;
        l=-1;
        for (int i = 0; i < len/2; i++)
        {
           if (s[i]!=s[len-1-i])
           {
            if (l==-1)
            {
                l=i;
            }
            r=i;
           }
           
        }
        if (l!=-1)
        {
            for (int i = l; i < r+1; i++)
            {
                s[i]=(s[i]=='1') ? '0':'1';
            }
            
        }
        int flag=0;
        for (int i = 0; i < len/2; i++)
        {
            if (s[i]!=s[len-1-i])
            {
                flag=1;
                break;
            }
            
        }
        if (flag)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
          
    }    
    return 0;
}