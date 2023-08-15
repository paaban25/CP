#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,c;
        cin>>b>>c;
        int a=1;
        while (true)
        {
            if(a*b % c==0){
                break;
            }
            else{
                a++;
                continue;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}