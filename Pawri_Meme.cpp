#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string newString="";
        for (int i = 0; i < s.length()-4; i++)
        {
            
            if(s.length()<5){
                
            }
            else if(s.substr(i,5)=="party"){
                newString+="pawri";
                i+=4;
            }
            else{
                newString+=s[i];
            }
        }
        cout<<newString<<endl;
    }
    return 0;
}