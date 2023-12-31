#include <bits/stdc++.h>
using namespace std;
int waitTime(string s,int index){
    int time=0;
    for (int i = index; i < s.length(); i++)
    {
        if (s[i]=='g')
        {
            break;
        }
        else{
            time++;
        }
    }
    return time;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        if (c=='g')
        {
            cout<<0<<endl;
        }
        else{
            s+=s;
            int minTime=INT_MIN;
            for (int i = 0; i < n; i++)
            {
                if (s[i]==c)
                {
                    minTime=max(minTime,waitTime(s,i));
                }
                
            }
            cout<<minTime<<endl;
        }
    }
    return 0;
}