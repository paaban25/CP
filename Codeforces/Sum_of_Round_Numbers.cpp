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
        ostringstream str1;
        str1 << n;
        string geek = str1.str();
        int zero_count=0;
        for (int i = 0; i < geek.length(); i++)
        {
            if(geek[i]=='0'){
                zero_count++;
            }
        }
        cout<<geek.length()-zero_count<<endl;
        for (int i = geek.length()-1; i >=0; i--)
        {
            if(geek[i]=='0'){
                continue;
            }
            else{
                for (int j = i; j < geek.length(); j++)
                {
                    cout<<geek[j];
                }
                cout<<endl;
                geek[i]='0';
            }
        }
        
        
    }

    return 0;
}