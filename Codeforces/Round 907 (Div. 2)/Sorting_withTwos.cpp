#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int queries[q];
        for (int i = 0; i < q; i++)
        {
            cin>>queries[i];
        }
        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int power=pow(2,queries[i]);
                if (arr[j]%power==0)
                {
                    arr[j]+=power/2;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}