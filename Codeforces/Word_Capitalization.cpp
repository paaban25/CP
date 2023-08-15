#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    if(int(input[0])>=97 && int(input[0])<=122){
        input[0]=char((input[0])-32);
    }
    cout<<input<<endl;
    return 0;
}