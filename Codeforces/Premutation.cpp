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
        int arr[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
            }
        }
        int rowNum;
        int missingNum;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i][n - 2] == arr[i - 1][n - 2] && arr[i][n - 2] == arr[i + 1][n - 2])
            {
                continue;
            }
            else
            {
                if (arr[i][n - 2] == arr[i - 1][n - 2])
                {
                    rowNum = i + 1;
                    missingNum = arr[i][n - 2];
                }
                else if (arr[i][n - 2] == arr[i + 1][n - 2])
                {
                    rowNum = i - 1;
                    missingNum = arr[i][n - 2];
                }
                else
                {
                    rowNum = i;
                    missingNum = arr[i + 1][n - 2];
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[rowNum][i] << " ";
        }
        cout << missingNum << endl;
    }
    return 0;
}