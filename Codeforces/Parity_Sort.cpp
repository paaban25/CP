#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],temp[n];
        for (int i = 0; i < n; i++)
        {
            int c;
            cin>>c;
            arr[i]=c;
            temp[i]=c;
        }
        sort(arr,arr+n);
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2==temp[i]%2)
            {
                count++;
            }
            
        }
        if (count==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}