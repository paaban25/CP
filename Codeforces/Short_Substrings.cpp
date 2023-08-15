#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string input;
        cin>>input;
        string output="";
        output+=input[0];
        for (int i = 1; i < input.length()-1; i=i+2)
        {
            output+=input[i];
        }
        output+=input[input.length()-1];
        cout<<output<<endl;
        
    }
    
    return 0;
}