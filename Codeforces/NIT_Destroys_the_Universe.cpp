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
        int arr[n];
        int countZero=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]==0)
            {
                countZero++;
            }
            
        }
        if (countZero=0)
        {
            cout<<1<<endl;
        }
        else{
            int count=0;
            for (int i = 1; i < n; i++)
            {
                if (arr[i]-arr[i-1]==arr[i] && arr[i]!=0)
                {
                    count++;
                }
                
            }
            if (arr[1]==0 && arr[0!=0])
            {
                count++;
            }
            
            cout<<count<<endl;
        }
    }
    
    return 0;
}