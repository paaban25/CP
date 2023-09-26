#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long X,n;
        cin>>X>>n;
        long long currentPosition=X;
        for (long long i = 1; i < n+1; i++)
        {
            currentPosition%2==0 ? currentPosition-=i:currentPosition+=i;
        }
        cout<<currentPosition<<endl;
        
    }
    return 0;
}