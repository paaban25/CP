#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for (int i = 0; i < s.length(); i++)
    {
        int counter=0;
        for (int j = i; j < i+7; j++)
        {
            if (s[j]==s[i])
            {
                counter++;
            }
            
        }
        if (counter==7)
        {
            flag++;
        }   
    }
    if (flag>0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }    
    return 0;
}