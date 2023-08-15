#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    int total_stamps=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        total_stamps+=arr[i];
    }
    long long num=(n*(n+1))/2;
    if (total_stamps==num)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}