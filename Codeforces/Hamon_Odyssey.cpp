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
        int part=1;
        int curr=arr[0];
        for (int i = 0; i < n; i++)
        {
            curr=curr&arr[i];
            if (curr==0)
            {
                if (i==n-1)
                {
                    break;
                }
            }
            else{
                part++;
                curr=arr[i+1];
            }
        }
        if (curr!=0)
        {
            part--;
            
        }
        part=max(part,1);
        cout<<part<<endl;
    }
    return 0;
}