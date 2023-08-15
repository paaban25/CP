#include<bits/stdc++.h>
using namespace std;
int string_unique(string s,int len=4){
    int count=0;
    for (int i = 0; i < 4; i++)
    {
        int times=0;
        for (int j = 0; j < 4; j++)
        {
            if(s[i]==s[j]){
                times++;
            }
        }
        if(times==1){
            count++;
        }
    }
    return count;
}
int cntDistinct(string str)
{
    unordered_set<char> s;
    for (int i = 0; i < str.size(); i++) {
        s.insert(str[i]);
    }
    return s.size();
}
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        if(cntDistinct(s)==1){
            cout<<-1<<endl;
        }
        else if(cntDistinct(s)==3){
            cout<<4<<endl;
        }
        else if(cntDistinct(s)==4){
            cout<<4<<endl;
        }
        else{
            if(string_unique(s,4)==1){
                cout<<6<<endl;
            }
            else{
                cout<<4<<endl;
            }
        }
    }
    
    return 0;
}