#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            int fromThis=0;
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    continue;
                }
                else{
                    if (a[i]-a[j]>=b[i]-b[j])
                    {
                        fromThis++;
                    }
                }
                
            }
            if(fromThis==n-1){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}