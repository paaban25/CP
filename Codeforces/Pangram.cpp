#include <bits/stdc++.h>
using namespace std;
int is_pangram(string s, int n)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string temp = "";
    temp += s[0];
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < temp.length(); j++)
        {
            if (temp[j] != s[i])
            {
                count++;
            }
        }
        if (count == temp.length())
        {
            temp += s[i];
        }
    }
    if (temp.length() == 26)
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
    int length;
    cin >> length;
    string s;
    cin >> s;
    if (is_pangram(s, length) == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}