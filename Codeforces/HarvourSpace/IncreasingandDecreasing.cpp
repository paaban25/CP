#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int boundary=(n-1)*n/2;
        if(y-x<boundary){
            cout<<-1<<endl;
        }
        else{
            int diff=y-x;
            cout<<x<<" ";
            int arr[n-2];
            for (int i = 0; i < n-2; i++)
            {
                arr[i]=y-(i+1)*(i+2)/2;
            }
            sort(arr, arr + n-2);
            for (int i = 0; i < n-2; i++)
            {
                cout<<arr[i]<<" ";
            }
            
            
            cout<<y<<" ";
        }
    }
    return 0;
}