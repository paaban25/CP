#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int difference = fabs(a - b);
        if (difference == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if(difference%10==0){
                int steps = (difference / 10) ;
            cout << steps << endl;
            }
            else{
                int steps = (difference / 10) + 1;
            cout << steps << endl;
            }
        }
    }

    return 0;
}