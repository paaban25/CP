#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int isGood(int a, int b)
{
    if (lcm(a, b) == gcd(a, b))
    {
        return 1;
    }
    else
    {
        return 0;
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
        int arr[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(isGood(arr[i],arr[j])){
                    count++;
                }

            }
            
        }
        cout<<count<<endl;
        
    }
    return 0;
}