#include <iostream>
using namespace std;
int arrSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr1[n],arr2[k];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        int initialSum=arrSum(arr1,n);
        for (int i = 0; i < k; i++)
        {
            int currentSum=0;
            for (int j = 0; j < i; j++)
            {
                currentSum+=arr2[j];
            }
            arr2[i]=currentSum+initialSum;
        }
        arr2[k-1]%2==0 ? cout<<"even": cout<<"odd"<<endl;
    }

    return 0;
}
