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
        int sad=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]==i+1)
            {
                sad++;
            }  
        }
        if (sad%2==0)
        {
            cout<<sad/2<<endl;
        }
        else{
            cout<<(sad+1)/2<<endl;
        }
    }
    return 0;
}