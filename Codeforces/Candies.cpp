#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n%2==0)
        {
            cout<<-1<<endl;
        }
        else{
            string s="";
            while(n!=1){
                if (n%4==1)
                {
                    n+=1;
                    n/=2;
                    s+='1';
                    s+=' ';
                }
                else{
                    n-=1;
                    n/=2;
                    s+='2';
                    s+=' ';
                }
            }
            cout<<s.length()<<endl;
            reverseStr(s);
            cout<<s<<endl;
        }
    }
    return 0;
}