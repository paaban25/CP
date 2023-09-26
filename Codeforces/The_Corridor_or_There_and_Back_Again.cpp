#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        int allow[n];
        for (int i = 0; i < n; i++)
        {
            int exceed;
            
            
            arr[i][1]%2==0?exceed=(arr[i][1]-2)/2:exceed=(arr[i][1])/2;
            allow[i]=arr[i][0]+exceed;
        }
        cout<<*min_element(allow, allow + n)<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<allow[i]<<" ";
        }
        
    }
    return 0;
}