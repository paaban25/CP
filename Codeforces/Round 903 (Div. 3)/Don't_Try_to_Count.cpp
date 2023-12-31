#include <bits/stdc++.h>
using namespace std;
bool isSubstring(const std::string &str, const std::string &sub)
{
    return str.find(sub) != std::string::npos;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, x;
        cin >> x >> s;
        int count = 0;
        int indicator = 0;
        int tick = 0;
        while (!isSubstring(x, s))
        {
            count++;
            indicator++;
            x += x;
            if (indicator == 10)
            {
                cout << -1 << endl;
                tick = 1;
                break;
            }
        }

        if (tick != 1)
        {
            cout << count << endl;
        }
    }
    return 0;
}