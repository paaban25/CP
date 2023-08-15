#include<bits/stdc++.h>
using namespace std;
string lower_to_upper(string s){
    string output="";
    for (int i = 0; i < s.length(); i++)
    {
        if(int(s[i])>=97 && int(s[i])<=122){
            output+=char(int(s[i])-32);
        }
        else{
            output+=s[i];
        }
    } 
    return output;  
}

string upper_to_lower(string s){
    string output="";
    for (int i = 0; i < s.length(); i++)
    {
        if(int(s[i])>=65 && int(s[i])<=90){
            output+=char(int(s[i])+32);
        }
        else{
            output+=s[i];
        }
    } 
     return output;    
}
int main()
{
    string word;
    cin>>word;
    int upper_count=0,lower_count=0;
    for (int i = 0; i < word.length(); i++)
    {
        if(int(word[i])>=97 && int(word[i])<=122){
            lower_count++;
        }
        else{
            upper_count++;
        }
    }
    if(lower_count>=upper_count){
        cout<<upper_to_lower(word)<<endl;
    }
    else{
        cout<<lower_to_upper(word)<<endl;
    }
    
    return 0;
}