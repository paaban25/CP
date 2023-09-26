#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int adjacent = 0;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                adjacent++;
            }
        }
        if (adjacent == 0 && s.length() <= 3)
        {
            if (s==")(")
            {
                cout<<"YES"<<endl;
                cout<<"(())"<<endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            if (adjacent == 0)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    cout << "(";
                }
                for (int i = 0; i < s.length(); i++)
                {
                    cout << ")";
                }
            }
            else
            {
                for (int i = 0; i < s.length(); i++)
                {
                    cout << "()";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}