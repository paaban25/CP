#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            double result = log2(static_cast<double>(a) / b);
            if (result == floor(result))
            {
                long long steps = log2(a/b);
                cout << (steps / 3) + (steps % 3) / 2 + (steps % 3) % 2<<endl;;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            double result = log2(static_cast<double>(b) / a);
            if (result == floor(result))
            {
                long long steps = log2(b/a);
                cout << (steps / 3) + (steps % 3) / 2 + (steps % 3) % 2<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        
    }
    return 0;
}