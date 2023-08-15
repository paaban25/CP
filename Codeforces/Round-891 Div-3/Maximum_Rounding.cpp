#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        int count = 0;
        while (n >= 0.5)
        {
            n = n / 10;
            if (n >= 0.5)
            {
                n = round(n);
                count++;
                cout << n << endl;
            }
            else
            {
                count++;
                break;
            }
        }
        cout << n * pow(10, count) << endl;
    }
    return 0;
}