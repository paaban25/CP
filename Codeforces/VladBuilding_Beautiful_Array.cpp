#include <bits/stdc++.h>
using namespace std;
int minArray(int arr[],int n){
    int minm=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minm=min(minm,arr[i]);
    }
    return minm;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int countOdd=0,countEven=0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]%2==0)
            {
                countEven++;
            }
            else{
                countOdd++;
            }
            
        }
        if(countEven==n || countOdd==n){
            cout<<"YES"<<endl;
        }
        else{
            if(minArray(arr,n)%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
        
    }
    return 0;
}