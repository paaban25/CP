#include <bits/stdc++.h>
using namespace std;
int maxSquare(int n)
{
    if (floor(sqrt(n)) == sqrt(n))
    {
        return n;
    }

    else
    {
        while (n--)
        {
            if (floor(sqrt(n)) == sqrt(n))
            {
                break;
            }
        }
        return n;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (maxSquare(n) == n)
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 0;
            while (n != 1)
            {
                n = n - maxSquare(n);
                count++;
            }
            cout << count + 1 << endl;
        }
    }
   
    return 0;
}