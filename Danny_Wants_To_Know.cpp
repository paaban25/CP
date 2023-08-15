#include<iostream>
using namespace std;
int main()
{
    int n,Q;
    cin>>n>>Q;
    int* A= new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    int* B= new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>B[i];
    }
    int arr[Q][2];
    for (int i = 0; i < Q; i++)
        for (int j = 0; j < 2; j++)
    {
        cin>>arr[i][j];
    }
    
    int arr_sum[n];
        for (int i = 0; i < n; i++)
        {
            arr_sum[i]=A[i]*B[i];
        } 
    for (int i = 0; i < Q; i++)
    {
         int sum=0;
        for (int j = arr[i][0]-1; j < arr[i][1]; j++)
        {
            sum+=arr_sum[j];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}