#include <bits/stdc++.h>
using namespace std;
int findChar(string s,char c){
    int position;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==c)
        {
            position=i;
            break;
        }
        
    }
    return position;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int time=0;
        int currentPos=0;
        for (int i = 0; i < 4; i++)
        {
            int index=findChar("1234567890",s[i]);
            time+=fabs(index-currentPos);
            time+=1;
            currentPos=index;
        }
        cout<<time<<endl;
    }
    return 0;
}