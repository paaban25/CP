#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int drenched[n];
        for (int i = 0; i < n; i++)
        {
            drenched[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j >-1; j--)
            {
                if (arr[i]>0)
                {
                    drenched[j]=1;
                    arr[i]--;
                } 
            }   
        }
        for (int i = 0; i < n; i++)
        {
            cout<<drenched[i]<<" ";
        }
        
        
    }
    return 0;
}