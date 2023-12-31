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
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i][i] = 1;
            arr[i][n - 1 - i] = 1;
        }
        if (n % 2 == 1)
        {
            arr[n / 2 - 1][n / 2] = 1;
            arr[n / 2][n / 2 + 1] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
return 0;
}
