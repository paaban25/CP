#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int arr[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i]=0;
        }
        for (int i = 0; i < s.length(); i++)
        {
            arr[int(s[i])-97]++;
        }
        int count=0;
        for (int i = 0; i < 26; i++)
        {
            if(arr[i]%2==0){
                count+=(arr[i]/2);
            }
            else{
                count+=(arr[i]/2)+1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}