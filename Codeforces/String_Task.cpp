#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input,output;
    output="";
    cin>>input;
    string vowels="aeiouyAEIOUY";
    for (int i = 0; i < input.length(); i++)
    {
        int flag=1;
        for (int j = 0; j < 12; j++)
        {
            if (input[i]==vowels[j])
            {
                flag=0;
            }        
        }
        if (flag==1)
        {
            output+=".";
            output+=input[i];
        }    
    }
    for (int i = 0; i < output.length(); i++)
    {
        if (int(output[i])>=65 && int(output[i])<=90)
        {
            output[i]=char(int(output[i])+32);
        }    
    }
    cout<<output<<endl; 
    return 0;
}