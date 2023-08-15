#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxRemaining=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            maxRemaining=max(maxRemaining,arr[i]);
        }
        
    }
    cout<<maxRemaining<<endl;
    
    return 0;
}