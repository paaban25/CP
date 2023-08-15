#include <bits/stdc++.h>
using namespace std;
string deletion(string s,int index){
    string output="";
    for (int i = 0; i < index; i++)
    {
        output+=s[i];
    }
    for (int i = index+1; i < s.length(); i++)
    {
        output+=s[i];
    }
    return output;
}
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
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = deletion(s,i);
        }
        int unique = 0;
        for (int i = 0; i < n; i++)
        {
            int distinct = 0;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] != arr[j])
                {
                    distinct++;
                }
            }
            if (distinct == i)
            {
                unique++;
            }
        }
        cout << unique << endl;
    }
   
    return 0;
}