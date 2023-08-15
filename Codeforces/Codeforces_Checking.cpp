#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char ch;
        cin>>ch;
        int count=0;
        string check="codeforces";
        for (int i = 0; i < check.length(); i++)
        {
            if (check[i]==ch)
            {
                count++;
            }
            
        }
        if (count==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
    }
    
    return 0;
}