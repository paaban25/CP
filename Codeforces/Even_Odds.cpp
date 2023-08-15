#include<iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    string order="";
    if (n%2!=0)
    {
       for (int i = 1; i < n+1; )
    {
        ostringstream str1;
        str1 << i;
        string geek = str1.str();
        order+=geek;
        i+=2;
    }
    for (int i = 2; i < n; )
    {
        ostringstream str1;
        str1 << i;
        string geek = str1.str();
        order+=geek;
        i+=2;
    }
    }

    else{
        for (int i = 1; i < n; )
    {
        ostringstream str1;
        str1 << i;
        string geek = str1.str();
        order+=geek;
        i+=2;
    }
    for (int i = 2; i < n+1; )
    {
        ostringstream str1;
        str1 << i;
        string geek = str1.str();
        order+=geek;
        i+=2;
    }
    }
    cout<<order[k-1]<<endl;
    
    
    return 0;
}