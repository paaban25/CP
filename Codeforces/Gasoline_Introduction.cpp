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
        int distance=0;
        int fuel=arr[0];
        while(fuel>0){
            distance++;
            fuel--;
            if (distance<5)
            {
                fuel+=arr[distance];
            }
            
        }
        cout<<distance<<endl;
        
    }
    return 0;
}


//This is a comment