#include <bits/stdc++.h>
using namespace std;
int isSorted(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  // If any element is greater than its next element, the array is not sorted
        }
    }
    return 1;  // If the loop completes, the array is sorted
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
        int steps=0;
        for (int i = n-1; i >=0 ; i--)
        {
            while (arr[i]>=arr[i+1])
            {
                steps++;
                if (arr[i]%2==0)
                {
                    arr[i]/=2;
                }
                else{
                    arr[i]+=1;
                    arr[i]/=2;
                }
            }
            
        }
        cout<<steps<<endl;
        
        
    }
    // int arr[5]={1,2,3,4,5};
    // cout<<isSorted(arr,5);
    return 0;
}