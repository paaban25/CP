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
        int left=0,right=0;
        for (int i = 0; i < s.length(); i++)
        {
            s[i]=='<'?right++:left++;
        }
        int countNum=1,cost=1;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]==s[i+1]){
                countNum++;
            }
            else{
                cost=max(cost,countNum);
            }
        }
        cout<<cost+1<<endl;
        
    }
    return 0;
}