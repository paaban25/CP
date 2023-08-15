#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,v;
        cin>>n>>k>>v;
        int* arr=new int[n];
        int sum_deleted_array=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum_deleted_array+=arr[i];
        }
        int sum_all=(n+k)*v;
        int xtra_sum=sum_all-sum_deleted_array;
        if (xtra_sum%k==0 && xtra_sum>0)
        {
            cout<<xtra_sum/k<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
        
    }
    
    return 0;
}