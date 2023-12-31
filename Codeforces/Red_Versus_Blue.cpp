#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int extra = r % (b + 1);
        string s = "";
        string Rs = "";
        for (int i = 0; i < r / (b + 1); i++)
        {
            Rs += 'R';
        }
        for (int i = 0; i < b; i++)
        {
            s += Rs;
            if (extra > 0)
            {
                s += 'R';
                extra--;
            }
            s += 'B';
        }
        s += Rs;
        if (extra > 0)
        {
            s += 'R';
            extra--;
        }
        cout<<s<<endl;
    }
    return 0;
}