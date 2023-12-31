#include <bits/stdc++.h>
using namespace std;
int findMinIndex(const int arr[], int size) {
    if (size <= 0) {
        // Handle the case of an empty array or invalid size
        return -1;  // You can choose a different value to indicate an error if needed
    }

    int minIndex = 0;  // Assume the first element is the minimum

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            // If a smaller element is found, update the minimum index
            minIndex = i;
        }
    }

    return minIndex;
}
int minNum(int n){
    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=lcm(i+1,n-i-1);
    }
    return findMinIndex(arr,n-1 )+1;

    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            cout<<minNum(n)<<" "<<n-minNum(n)<<endl;
        }
    }
    return 0;
}