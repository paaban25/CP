#include <bits/stdc++.h>
#include <algorithm> 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string sRev=s;
        reverse(sRev.begin(), sRev.end());
        cout<<s+sRev<<endl;
    }
    return 0;
}