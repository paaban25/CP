#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_zero=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0'){
                count_zero++;
            }
        }
        int count_one=s.length()-count_zero;
        int alter=0;
        for (int i = 0; i <s.length()-count_one; i++)
        {
            if(s[i]=='1'){
                alter++;
            }
        }
        cout<<alter<<endl;
        
    }
    
    return 0;
}