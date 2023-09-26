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
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }
        sort(arr,arr+n);
        for (int i = 1; i < n; i++)
        {
            if (arr[i]%(2*arr[0]-1)==0)
            {
                sum+=(arr[i]/(2*arr[0]-1))-1;
            }
            else
            {
                sum+=(arr[i]/(2*arr[0]-1));
            }
            
        }
        
        
        cout<<sum<<endl;

    }
    return 0;
}