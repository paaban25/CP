#include <bits/stdc++.h>
using namespace std;
int indexOfmax(int arr[], int n)
{
    int index = 0;
    int maxElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= maxElement)
        {
            index = i;
        }

        maxElement = max(maxElement, arr[i]);
    }
    return index;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        arr2[i] = a;
    }

    sort(arr2, arr2 + n, greater<int>());
    int count = 1;
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        count += 1 + (i + 1) * arr2[i + 1];
    }
    cout << count << endl;

    for (int i = 0; i < n; i++)
    {
        cout << indexOfmax(arr, n) + 1 << " ";
        arr[indexOfmax(arr, n)] = 0;
    }

    return 0;
}