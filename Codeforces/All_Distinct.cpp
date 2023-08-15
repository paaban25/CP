#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int xtra=n-countDistinct(arr,n);
        int final= xtra%2==0 ? n-xtra : n-xtra-1;
        cout<<final<<endl;
    }
    return 0;
}