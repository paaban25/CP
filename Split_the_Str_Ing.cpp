#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[n-1]==s[i]){
                flag++;
            }
        }
        if (flag==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}