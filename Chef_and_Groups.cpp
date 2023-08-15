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
        int firstOne = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                firstOne = i;
                break;
            }
        }

        int groups = 0;
        for (int i = firstOne; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '1')
                {
                    continue;
                }
                else
                {
                    groups++;
                }
            }
            else{
                continue;
            }
        }
        cout<<groups<<endl;
    }
    return 0;
}