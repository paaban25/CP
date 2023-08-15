#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string pi="314159265358979323846264338327";
    while (t--)
    {
        string input;
        cin>>input;
        int count=0;
        for (int i = 0; i < input.length(); i++)
        {
            if(input[i]==pi[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}