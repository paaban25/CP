#include <bits/stdc++.h>
using namespace std;
int countTwo(int n){
    int count=0;
    while(n%2==0){
        n/=2;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int product=1;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            product*=arr[i];
        }
        int twos=0;
        while(product%2==0){
            product/=2;
            twos++;
        }
        int count=0;
        while(twos>0){
            twos-=countTwo(n);
            n--;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}