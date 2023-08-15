#include <bits/stdc++.h>
using namespace std;
int is_palindrome(string s)
{
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }
    if (s == rev)
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
        string arr[2 * n - 2];
        for (int i = 0; i < (2 * n) - 2; i++)
        {
            cin >> arr[i];
        }
        string main = "";
        for (int i = 0; i < 2 * n - 2; i++)
        {
            main += arr[i];
        }
        if(is_palindrome(main)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}