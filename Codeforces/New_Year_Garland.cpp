#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        sort(arr, arr + 3);
        if (arr[2]>arr[0]+arr[1]+1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
    }
    return 0;
}