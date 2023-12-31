#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int result = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            string s1 = s.substr(i, 2);
            int count = 0;
            for (int j = 0; j < s.length() - 1; j++)
            {
                if (j == i + 1)
                {
                    continue;
                }
                else
                {
                    string s2 = s.substr(j, 2);
                    if (s1 == s2)
                    {
                        count++;
                    }
                }
            }
            if (count > 1)
            {
                result++;
            }
        }
        if (result > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}