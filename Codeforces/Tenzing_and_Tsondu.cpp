#include <bits/stdc++.h>
using namespace std;
int sumArray(int arr[],int len){
    int accumulator=0;
    for (int i = 0; i < len; i++)
    {
        accumulator+=arr[i];
    }
    return accumulator;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>arr2[i];
        }
        if(sumArray(arr1,n)>sumArray(arr2,m)){
            cout<<"Tsondu"<<endl;
        }
        else if(sumArray(arr1,n)<sumArray(arr2,m)){
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}