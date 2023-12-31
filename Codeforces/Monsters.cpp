#include <bits/stdc++.h>
using namespace std;
int isNonPos(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        {
            count++;
        }
    }
    if (count == n)
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int resultArray[n];
        int currentPos = 0;
        while (isNonPos(arr, n) == 0)
        {
            int *maxElementPtr = max_element(arr, arr + n);
            int maxIndex = distance(arr, maxElementPtr);
            arr[maxIndex]-=k;
            if (arr[maxIndex]<=0)
            {
                resultArray[currentPos]=maxIndex+1;
                currentPos++;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<resultArray[i]<<" ";
        }
        
    }
    cout<<endl;
    return 0;
}