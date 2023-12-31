#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char trumpSuit;
        cin >> trumpSuit;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1[0] == '6' || s1[0] == '7' || s1[0] == '8' || s1[0] == '9')
        {
            s1[0] = char(s1[0] - 5);
        }
        if (s2[0] == '6' || s2[0] == '7' || s2[0] == '8' || s2[0] == '9')
        {
            s2[0] = char(s2[0] - 5);
        }
        if (s1[0] == 'T')
        {
            s1[0] = '5';
        }
        if (s1[0] == 'J')
        {
            s1[0] = '6';
        }
        if (s1[0] == 'Q')
        {
            s1[0] = '7';
        }
        if (s1[0] == 'K')
        {
            s1[0] = '8';
        }
        if (s1[0] == 'A')
        {
            s1[0] = '9';
        }
        if (s2[0] == 'T')
        {
            s2[0] = '5';
        }
        if (s2[0] == 'J')
        {
            s2[0] = '6';
        }
        if (s2[0] == 'Q')
        {
            s2[0] = '7';
        }
        if (s2[0] == 'K')
        {
            s2[0] = '8';
        }
        if (s2[0] == 'A')
        {
            s2[0] = '9';
        }
        if (s1[1] == trumpSuit)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (s1[1] == s2[1] && s2[0] > s1[0])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}