#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n*k];
        for (int i = 0; i < n*k; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int arr2[k][n];
        int currrentIndex=0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr2[i][j]=arr[currrentIndex];
                currrentIndex++;
            }
            
        }
        int position= n%2==0 ? n/2: (n+1)/2;
        int sum=0;
        for (int i = 0; i < k; i++)
        {
            sum+=arr2[i][position-1];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}