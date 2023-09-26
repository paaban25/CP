#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=n%2==0? n/2:(n+1)/2;
        cout<<m<<endl;
        if (n%2==0)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<6*m+2<<" "<<6*m+5<<endl;
            }
            
        }
        else{
            for (int i = 0; i < m; i++)
            {
                if (i==m-1)
                {
                     cout<<6*m-6+2<<" "<<6*m+3<<endl;
                }
                else{
                   cout<<6*m+2<<" "<<6*m+5<<endl;
                }
            }
            
        }
        
    }
    return 0;
}