#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int equal=1;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i==0){
                continue;
            }
            else{
                if (arr[i]==arr[i-1])
                {
                    equal++;
                }
                
            }
        }
        if (equal==n)
        {
            cout<<-1<<endl;
        }
        else
        {
             sort(arr,arr+n);
        int c=1;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]==arr[n-1]){
                c++;
            }
        }
        cout<<n-c<<" "<<c<<endl;
        for (int i = 0; i < n; i++)
        {
            if(i<n-c){
                cout<<arr[i]<<" ";
                
            }
        }
        cout<<endl;
        for (int i = n-c; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        }
        
        
       
        
        
        
        
        
        
    }
    return 0;
}