#include<iostream>
#include<string>
using namespace std;

string LShift(string v){
    string result="";
    for (int i = 1; i < v.length(); i++)
    {
        result+=v[i];
    }
    result+=v[0];  
    return result;  
}
string RShift(string v){
    string result="";
    result+=v[v.length()-1];  
    for (int i = 0; i < v.length()-1; i++)
    {
        result+=v[i];
    }
    return result;  
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string S;
        cin>>S;
        if(LShift(S)==RShift(S)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}