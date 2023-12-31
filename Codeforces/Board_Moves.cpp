#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count=0;
        for (long long i = 3; i < n+1; i+=2)
        {
            long long a=i/2;

            count+=a*(i-1)*4;
        }
        
        cout<<count<<endl;
    }
    return 0;
}