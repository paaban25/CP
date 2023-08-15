#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int len = s.length();
        int flag = 2;
        if (len >= 3)
        {
            for (int i = 0; i < len; i++)
            {

                if (i % 3 == 2)
                {
                    if (s[i] != s[i - 1])
                    {
                        flag = 0;
                    }
                }
                if (flag == 0)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            if (flag == 2)
            {
                cout << "YES" << endl;
            }
        }
        else{
            if(len==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}