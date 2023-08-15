#include<iostream>
#include<string>
using namespace std;
// int fact(int n)
// {
//       if(n==0)
//       return 1;
//     int res = 1;
//     for (int i = 2; i <= n; i++)
//         res = res * i;
//     return res;
// }
// int nCr(int n, int r)
// {
//     return fact(n) / (fact(r) * fact(n - r));
// }
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_one=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                count_one++;
            }  
        }

        
            cout<<count_one*(count_one+1)/2<<endl;
           
    }  
    return 0;
}