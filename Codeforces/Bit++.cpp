#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string* operations=new string[n];
    for (int i = 0; i < n; i++)
    {
        cin>>operations[i];
    }
    int value=0;
    for (int i = 0; i < n; i++)
    {
        if(operations[i][1]=='+'){
            value++;
        }
        else{
            value--;
        }
    }
    cout<<value<<endl;
    
    
    return 0;
}