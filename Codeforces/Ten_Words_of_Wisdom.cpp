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
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }
        int winner = 0;
        int maxQuality = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (arr[i][0] < 10 && arr[i][2]>maxQuality)
            {
                winner = i + 1;
            }
        }
        cout<<winner<<endl;
    }
    return 0;
}