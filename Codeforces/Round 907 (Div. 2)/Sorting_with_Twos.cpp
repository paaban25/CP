#include <bits/stdc++.h>
using namespace std;
int largestPowerOf2LessThan(int number) {
    if (number <= 1) {
        return 0; 
    }
    
    int result = 1;
    while (result * 2 < number) {
        result *= 2;
    }
    
    return result;
}
int isNonDecreasing(int arr[],int n){
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i+1]>=arr[i])
        {
            count++;
        }
        
    }
    if (count==n-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
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
        int num=largestPowerOf2LessThan(n);
        while (num!=1)
        {
            for (int i = 0; i < num; i++)
            {
                arr[i]>0 ? arr[i]--:arr[i]+=0;
            }
            num%=2;
        }
        if (isNonDecreasing(arr,n)==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}