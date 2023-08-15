#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        // double possiblities=6-x-y;
       if(x+y>6){
        cout<<"0"<<endl;
       }
       else{
         cout<< (6-x-y)/6<<endl;
       }
    }
    return 0;
}