#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int length=lcm(s.length(),t.length());
        string newS="",newT="";
        for (int i = 0; i < length/s.length(); i++)
        {
            newS+=s;
        }
        for (int i = 0; i < length/t.length(); i++)
        {
            newT+=t;
        }
        if (newS==newT)
        {
            for (int i = 0; i < length/s.length(); i++)
        {
            cout<<s;
        }
           cout<<endl; 
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}