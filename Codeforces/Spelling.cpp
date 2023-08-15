#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string actual="Timur";
        sort(actual.begin(),actual.end());
        string input;
        cin>>input;
        sort(input.begin(),input.end());
        if(actual==input){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}