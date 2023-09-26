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
        long long b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int inc = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (i > 0)
            {
                if (b[i] > b[i + 1]){inc++;}
                    
                
            }
        }
        cout << n + inc << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cout << b[i] << " ";
            }
            else
            {
                if (b[i] < b[i - 1])
                {
                    cout << 1 << " ";
                    cout << b[i] << " ";
                }
                else
                {
                    cout << b[i] << " ";
                }
            }
        }
    }
    return 0;
}