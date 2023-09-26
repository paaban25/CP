#include <bits/stdc++.h>
using namespace std;
int lucyNum(int n)
{
    int maxNum = 47, minNum = 58;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) < minNum)
        {
            minNum = int(s[i]);
        }
        if (int(s[i]) > maxNum)
        {
            maxNum = int(s[i]);
        }
    }
    return maxNum - minNum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int maxLucky = -1;
        int num;
        for (int i = l; i < r + 1; i++)
        {
            if (lucyNum(i) >= maxLucky)
            {
                maxLucky = lucyNum(i);
                num=i;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}