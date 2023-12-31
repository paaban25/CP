#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for (int i = 2; i < n; i++)
        {
            int den=pow(2,i)-1;
            if (n%den==0)
            {
                cout<<n/den<<endl;
                break;
            }
            
            
        }
        
    }
    return 0;
}