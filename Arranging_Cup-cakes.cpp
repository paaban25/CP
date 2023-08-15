
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int min_diff=INT_MAX;
        for (int i = 1; i < n+1; i++)
        {
            if (n%i==0 && fabs(i-(n/i))<=min_diff)
            {
                min_diff=fabs(i-(n/i));
            }
            
        }
        cout<<min_diff<<endl;
        
    }
    
    return 0;
}