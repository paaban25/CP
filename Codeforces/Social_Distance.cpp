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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int chairsReq = n;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                chairsReq += arr[i];
            }
            else if (i == n - 1)
            {
                if (arr[i] >= arr[i - 1] && arr[i] >= arr[0])
                {
                    chairsReq += arr[i]-arr[i-1] +arr[i];
                }
                else if (arr[i] < arr[i - 1] && arr[i] > arr[0])
                {
                    chairsReq += arr[i];
                }
                else if (arr[i] > arr[i - 1] && arr[i] < arr[0])
                {
                    chairsReq += arr[i]-arr[i-1] +arr[0];
                }
                else
                {
                    chairsReq +=  arr[0];
                }
            }

            else
            {
                if (arr[i] > arr[i - 1])
                {
                    chairsReq += arr[i];
                    chairsReq+=arr[i]-arr[i-1];
                }
                else
                {
                    chairsReq += arr[i];
                }
            }
        }
        if (chairsReq < m)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}