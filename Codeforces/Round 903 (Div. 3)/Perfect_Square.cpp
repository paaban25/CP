#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char initial[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>initial[i][j];
            }
            
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (initial[i][j]>initial[j][3-i])
                {
                    count+=initial[i][j]-initial[j][3-i];
                }
            }
            
        }
        cout<<count<<endl;
        
    }
    return 0;
}