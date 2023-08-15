#include <iostream>
using namespace std;

int isPrime(int n)
{
    int factors = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
    }
    if (factors == 2)
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
    int num = 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        for (int i = x + y + 1; i < x + y + 1000; i++)
        {
            if (isPrime(i) == 1)
            {
                num = i;
                break;
            }
        }
        cout << num-x-y << endl;
    }
    return 0;
}