#include <bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n)
{
    int distinctCount = 0;

    for (int i = 0; i < n; i++)
    {
        bool isDistinct = true;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct)
        {
            distinctCount++;
        }
    }

    return distinctCount;
}
bool isDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return false;
        }
    }
    return true;
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
        int distinctElements = countDistinct(arr, n);
        if (distinctElements == n)
        {
            if (isDescending(arr,n))
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}