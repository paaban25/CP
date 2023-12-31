#include <bits/stdc++.h>
using namespace std;
int isSame(string s)
{
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    if (count == s.length() - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int steps=0;
        while (isSame(s)==0)
        {
            for (int i = 0; i < s.length()-1; i++)
            {
                if (s[i]==s[i+1])
                {
                    s.erase(i,i+1);
                }
                else{
                    continue;
                }
            }
            
            steps++;
        }
        if (steps%2==0)
        {
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
        
    }
    return 0;
}