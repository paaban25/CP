#include <bits/stdc++.h>
using namespace std;
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
        int x,n;
        cin>>x>>n;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            int countFree=0;
            for (int j = 0; j < n; j++)
            {
                if(arr[i][j]=='0'){
                    countFree++;
                }
            }
            count+=nCr(countFree,x);
        }
        cout<<count<<endl;
    // }
    return 0;
}