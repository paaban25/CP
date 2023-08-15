#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0,maxm=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]!=0){
            count++;
            maxm=max(count,maxm);
        }
        else{
            count=0;
        }
    }
    cout<<maxm<<endl;
    
    return 0;
}