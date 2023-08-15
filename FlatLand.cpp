#include <iostream>
#include <cmath>
using namespace std;

int highestSQ(int n)
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
                break;
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
        int count = 0;
        while (n != 0)
        {
            n = n - highestSQ(n);
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
