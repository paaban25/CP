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
        int laneBusy[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> laneBusy[i];
        }
        sort(laneBusy, laneBusy + 2 * n);
        int maxLanes = 0;
        int consecutive = 1;
        for (int i = 1; i < 2 * n; i++)
        {
            if (laneBusy[i] == laneBusy[i - 1])
            {
                consecutive++;
            }
            maxLanes = max(maxLanes, consecutive);
        }

        cout << maxLanes << endl;
    }
    return 0;
}