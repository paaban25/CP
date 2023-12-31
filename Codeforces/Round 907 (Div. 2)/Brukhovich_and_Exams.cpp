#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{

    int result = min(a, b);
    if (a==0)
    {
        return b;
    }
    else if (b==0)
    {
        return a;
    }
    
    else{
            while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (k > 0)
            {
                if (arr[i]==0)
                {
                    continue;
                }
                
                else{
                    if (gcd(arr[i], arr[i - 1]) == 1 && gcd(arr[i], arr[i + 1]) == 1)

                {
                    arr[i] = 0;
                    k--;
                }
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i==0])
            {
                /* code */
                continue;
            }
            else{
                if (k > 0)
            {
                if (gcd(arr[i], arr[i + 1]) == 1)
                {
                    arr[i] = 0;
                    k--;
                }
            }
            }
            
        }
        int saddness = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (gcd(arr[i], arr[i + 1]) == 1)
            {
                saddness++;
            }
        }
        cout << saddness << endl;
    }
    return 0;
}