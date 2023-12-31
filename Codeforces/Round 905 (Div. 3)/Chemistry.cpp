#include <bits/stdc++.h>
using namespace std;
int charCount(string s, char c)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (c == s[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                if (charCount(s, s[i]) % 2 != 0)
                {
                    s[i] = '0';
                    k--;
                }
            }
        }
        if (k > 0)
        {
           if (k%2==0)
           {
                cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
        }
        else
        {
            int remainingOddCount = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    continue;
                }
                else
                {
                    if (charCount(s, s[i]) % 2 != 0)
                    {
                        remainingOddCount++;
                    }
                }
            }
            if (n % 2 == 0)
            {
                if (remainingOddCount == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (remainingOddCount <=1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}