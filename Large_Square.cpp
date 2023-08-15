#include <bits/stdc++.h>
using namespace std;

int largestSQ(int n){
    int sq=n;
    for (int i = n; i >0; i--)
    {
        if(floor(sqrt(i))==sqrt(i)){
            
            break;
        }
        else{
            sq--;
        }
    }
    return sq;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        cout<<a*sqrt(largestSQ(n))<<endl;
    }
    return 0;
}