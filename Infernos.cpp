#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }
        int modeONE=0;
        int modeMULTIPLE=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%x==0){
                modeONE+=arr[i]/x;
            }
            else{
                modeONE+=arr[i]/x +1;
            }
            modeMULTIPLE=max(modeMULTIPLE,arr[i]);
        }
        cout<<min(modeMULTIPLE,modeONE)<<endl;  
    }
    return 0;
}