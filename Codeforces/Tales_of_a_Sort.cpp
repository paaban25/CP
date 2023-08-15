#include <bits/stdc++.h>
using namespace std;
int isSorted(int arr[], int len)
{
    int count = 0;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            count++;
        }
    }
    if (count == len - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int steps=0;
        while (isSorted(arr,n)==0)
        {
            steps++;
            for (int i = 0; i < n; i++)
            {
                arr[i]=max(0,arr[i]-1);
            }
            
        }
        cout<<steps<<endl;
    }
    return 0;
}