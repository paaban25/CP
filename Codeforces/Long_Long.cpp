#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=0;
        int arr[n];
        int sum=0,flag=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=fabs(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<=0){
                if (arr[i]<0)
                {
                    k=1;
                }
                
            }
            else{
                    if (k==1)
                    {
                        flag++;
                        k=0;
                    }
                    
                }
        }
        
        
        
    }
    return 0;
}