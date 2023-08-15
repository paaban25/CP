#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    int free[n];
    for (int i = 0; i < n; i++)
    {
        free[i]=arr[i][1]-arr[i][0];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (free[i]>=2)
        {
            count++;
        }   
    }
    cout<<count<<endl;
    return 0;
}