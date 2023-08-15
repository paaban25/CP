#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first=int(s[0])-48;
        int second= int(s[2])-48;
        cout<<first+second<<endl;
    }
    return 0;
}