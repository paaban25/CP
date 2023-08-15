#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0]>=x-y && arr[i][1]<=k)
            {
                count++;
            }
            
        }
        string message= count==0 ? "UnluckyChef": "LuckyChef"; 
        cout<<message<<endl;
        
    }
    return 0;
}