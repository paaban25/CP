#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int OddBefore=0;
        for (int i = 1; i < n; i++)
        {
            if(i%2!=0){
                OddBefore++;
            }
        }
        
        if(n%2==0){
            if(OddBefore%2==0){
                cout<<n<<endl;
            }
            else{
                cout<<n-1<<endl;
            }
        }
        else{
            if(OddBefore%2==0){
                cout<<n-1<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }
    }
    return 0;
}