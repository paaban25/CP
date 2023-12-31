#include <bits/stdc++.h>
using namespace std;
int expenditure(int s)
{
    int output;
    for (int i = s; i > 0; i--)
    {
        if (i % 10 == 0)
        {
            output=i;
            break;
        }
    }
    return output;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int totalExp = 0;
        while (s>=10)
        {
            int x=expenditure(s);
            totalExp+=x;
            s-=x;
            s+=x/10;
        }
        

        cout << totalExp+s << endl;
    }
    return 0;
}