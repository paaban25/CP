#include<bits/stdc++.h>
using namespace std;

int is_even(int arr[],int len){
    int even=0;
    for (int i = 0; i < len; i++)
    {
        if(arr[i]%2==0){
            even++;
        }
        if(even==len){
            return 1;
        }
        else{
            return 0;
        }
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        
    }
    
    return 0;
}