#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int candies=n-(n%k)+min(k/2,n%k);
        cout<<candies<<endl;
        
    }
    return 0;
}