#include <bits/stdc++.h>
using namespace std;
long long func(long long x, long long a)
{
    return( (x / a) + (x % a));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, a;
        cin >> l >> r >> a;
        long long arr[r - l + 1];
        for (int i = 0; i < r - l + 1; i++)
        {
            arr[i] = func(l+i,a);
        }
        cout << *max_element(arr, arr + (r - l + 1)) ;
    }
    return 0;
}