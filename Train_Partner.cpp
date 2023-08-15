#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%8==0 || n%8==7){
            if(n%8==0){
                cout<<(n)-1<<"SL"<<endl;
            }
            else{
                cout<<(n)+1<<"SU"<<endl;
            }
        }
        else if(n%8==1 || n%8==4){
            if(n%8==1){
                cout<<(n)+3<<"LB"<<endl;
            }
            else{
                cout<<(n)-3<<"LB"<<endl;
            }
        }
        else if(n%8==2 || n%8==5){
            if(n%8==2){
                cout<<(n)+3<<"MB"<<endl;
            }
            else{
                cout<<(n)-3<<"MB"<<endl;
            }
        }
        else if(n%8==3 || n%8==6){
            if(n%8==3){
                cout<<(n)+3<<"UB"<<endl;
            }
            else{
                cout<<(n)-3<<"UB"<<endl;
            }
        }
    }
    return 0;
}