#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0 && k % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != 0 && k % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != 0 && k % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0 && k % 2 != 0)
        {
            if (n % 2 == 0 || (n / 2) >= k)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

return 0;
}