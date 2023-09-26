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
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i]==arr[0])
            {
                count++;
            }
            
        }
        if (count==n-1)
        {
            cout<<-1<<endl;
        }
        else{
            int maximum=*max_element(arr, arr + n);
            for (int i = 0; i < n; i++)
            {
                if (arr[i]==maximum)
                {
                    if (i>0 && arr[i]>arr[i-1])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                    if (i<n-1 && arr[i]>arr[i+1])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
                
            }
            
        }
        
    }
    return 0;
}