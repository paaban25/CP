#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int* arr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]){
            for (int i = 0; i < n-1; i++)
            {
                if(arr[0]!=arr[i]){
                    cout<<i+1<<endl;
                    break;
                }
            }
            
        }
        else{
            if(arr[0]==arr[1]){
                cout<<n<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    

    return 0;
}