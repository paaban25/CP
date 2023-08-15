#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,evenElements=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0){
                evenElements++;
            }
        }
        if(evenElements==n){
            cout<<0<<endl;
        }
        else{
            cout<<evenElements<<endl;
        }
    }
    return 0;
}