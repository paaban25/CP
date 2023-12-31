#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string unit_length="",a_length="";
        int num=97;
        for (int i = 0; i < b; i++)
        {
            unit_length+=char(num);
            num++;
        }
        int toBeCopied=(a%b==0)?(a/b):(((a/b)+1));
        for (int i = 0; i < toBeCopied; i++)
        {
            a_length+=unit_length;
        }
        string a_length_final=a_length.substr(0,a);
        for (int i = 0; i < n-a; i++)
        {
            a_length_final+=a_length_final[i];
        }
        cout<<a_length_final<<endl;
        
    }
    return 0;
}