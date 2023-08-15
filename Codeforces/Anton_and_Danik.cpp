#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string win;
    cin>>win;
    int A=0,D=0;
    for (int i = 0; i < win.length(); i++)
    {
        if(win[i]=='A'){
            A++;
        }
        else{
            D++;
        }
    }
    if(A==D){
        cout<<"Friendship"<<endl;
    }
    else if(A>D){
        cout<<"Anton" <<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
    
    return 0;
}