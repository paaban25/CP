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
        int colors[n];
        for (int i = 0; i < n; i++)
        {
            cin >> colors[i];
        }
        int a = colors[0];
        int b = colors[n - 1];
        
        int countA = 0, countB = 0;
        int indexA, indexB;
        for (int i = 0; i < n; i++)
        {
            if (countA == k)
            {
                break;
            }

            else
            {
                if (colors[i] == a)
                {
                    countA++;
                    if (countA == k)
                    {
                        indexA = i;
                        break;
                    }
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (countB == k)
            {
                break;
            }

            else
            {
                if (colors[i] == b)
                {
                    countB++;
                    if (countB == k)
                    {
                        indexB = i;
                        break;
                    }
                }
            }
        }
        if (indexA == n - 1 || indexB == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (a == b)
            {
                if (countA == k && countB == k && indexA <= indexB)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (countA == k && countB == k && indexA < indexB)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}