#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (c % 2 == 0)
        {
            if (a > b)
            {
                cout << "FIRST" << endl;
            }

            else
            {
                cout << "SECOND" << endl;
            }
        }
        else
        {

            if (a >= b)
            {
                cout << "FIRST" << endl;
            }

            else
            {
                cout << "SECOND" << endl;
            }
        }
    }
    return 0;
}