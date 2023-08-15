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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int HCF = arr[0];
        for (int i = 1; i < n; i++)
        {
            int temp = __gcd(HCF, arr[i]);
            HCF = temp;
        }
        int non_HCF = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != HCF)
            {
                non_HCF++;
            }
        }
        cout << non_HCF << endl;
    }

    return 0;
}