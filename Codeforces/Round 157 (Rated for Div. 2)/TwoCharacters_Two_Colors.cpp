#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long red[n], blue[n];
        for (int i = 0; i < n; i++)
        {
            cin >> red[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> blue[i];
        }
        string color = "";
        int cost=0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                color += (red[i] > blue[i]) ? 'R' : 'B';
                cost+=max(red[i],blue[i]);
            }
            else{
                
            }
        }
    }
    return 0;
}