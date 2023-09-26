#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int time = 0;
        if (n >= 20)
        {
            time += 25 * (n / 10);
            n = n % 10;

            if (n == 9)
            {
                time += 25;
            }
            if (n == 8)
            {
                time += 20;
            }

            if (n == 7)
            {
                time += 20;
            }
            else
            {
                time += 15;
            }

            cout << time << endl;
        }
        else
        {
            if (n % 6 == 0)
            {
                cout << (n / 6) * 15 << endl;
            }
            else if (n % 8 == 0)
            {
                cout << (n / 8) * 20 << endl;
            }
            else
            {
                time += 25 * (n / 10);
                n = n % 10;

                if (n == 9)
                {
                    time += 25;
                }
                if (n == 8)
                {
                    time += 20;
                }

                if (n == 7)
                {
                    time += 20;
                }
                else
                {
                    time += 15;
                }
                cout << time << endl;
            }
        }
    }
    return 0;
}