#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int row1[4] = {1, 0, 0, 1};
        int row2[4] = {0, 1, 1, 0};
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << row1[j % 4] << " ";
                }
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    cout << row2[j % 4] << " ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}