#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        string next= ((x+y)/k)%2==0 ? "Chef": "Paja";
        cout<<next<<endl;

    }
    return 0;
}