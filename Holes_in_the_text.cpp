#include<iostream>
using namespace std;
int main()
{
    int holes[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {
            count+=holes[int(s[i])-65];
        }
        cout<<count<<endl;
        
    }
    return 0;
}