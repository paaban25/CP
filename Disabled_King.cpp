#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int steps= n%2==0 ? n:n-1;
        cout<<steps<<endl;
    }
    return 0;
}