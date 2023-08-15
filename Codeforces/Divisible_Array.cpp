#include <bits/stdc++.h>
using namespace std;
int gcd( int a,  int b)
{
    if (b == 0)
        return a;
   
    return gcd(b, a % b);
}

int lcm(int a, int b) {
      return (a / gcd(a, b)) * b;
}

int lcmTillEnd(int n){
    int result=1;
    for (int i = 2; i < n+1; i++)
    {
        result=lcm(result,i);
    }
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int lcmOfAll=lcmTillEnd(n);
        for (int i = 0; i < n; i++)
        {
            cout<<lcmOfAll*(i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}