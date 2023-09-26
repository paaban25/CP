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
        int count0=0,greater=0,one=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]==0)
            {
                count0++;
            }
            else if (arr[i]==1)
            {
                one++;
            }
            else{
                greater++;
            }
            
        }
        int not0=n-count0;
        if (count0>not0+1)
        {
            if (one==0)
            {
                cout<<1<<endl;
            }
            else{
                if (greater)
                {
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
            }
            
        }
        else{
            cout<<0<<endl;
        }
        
    }
    return 0;
}