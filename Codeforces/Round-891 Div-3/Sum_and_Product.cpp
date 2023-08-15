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
        int q;
        cin>>q;
        while (q--)
        {
            int count=0;
            int x,y;
            cin>>x>>y;
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if(arr[i]* arr[j]==y && arr[i]+arr[j]==x){
                        count++;
                    }
                }
                
            }
        cout<<count<<endl; 
        }
        
    }
    return 0;
}