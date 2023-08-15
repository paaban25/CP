#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input,output="";
    cin>>input;
    for (int i = 0; i < input.length(); )
    {
        if(input[i]=='.'){
            output+='0';
            i++;
        }
        else{
            if(input[i+1]=='.'){
                output+='1';
            }
            else{
                output+='2';
            }
            i+=2;
        }
    }
    cout<<output<<endl;
    
    return 0;
}