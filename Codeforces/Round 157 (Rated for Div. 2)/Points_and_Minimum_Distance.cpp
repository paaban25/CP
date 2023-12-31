#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+2*n);
        int point[n][2];
        int distance=0;
        for (int i = 0; i < n; i++)
        {
            point[i][0]=arr[i];
            point[i][1]=arr[2*n-1-i];
            if (i!=0)
            {
                distance+=fabs(point[i][0]-point[i-1][0])+fabs(point[i][1]-point[i-1][1]);
            }
            
        }
        cout<<distance<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<point[i][0]<<" "<<point[i][1]<<endl;
        }
        
        
    }
    return 0;
}