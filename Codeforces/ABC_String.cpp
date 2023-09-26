#include <bits/stdc++.h>
using namespace std;
bool isregular(string t)
{
    ll n = t.length(), co = 0;
    fr(i, 0, n)
    {
        if (t[i] == ')')
            co--;
        else
            co++;
        if (co < 0)
            return false;
    }
    if (co > 0)
        return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char first = s[0];
        char last = s[s.length() - 1];
        int openingCount = 0, closingCount = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == first)
            {
                s[i] = '(';
                openingCount++;
            }
            else if (s[i] == last)
            {
                s[i] = ')';
                closingCount++;
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}