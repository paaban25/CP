#include <bits/stdc++.h>
using namespace std;
int oops(int n){
    int factor=0;
    for (int i = 2; i < n+1; i++)
    {
        if (n%i==0)
        {
            factor=i;
            break;
        }
    }
    return factor+n;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        while (k--)
        {
            int temp=oops(n);
            n=temp;
        }
        cout<<n<<endl;
    }
    return 0;
}