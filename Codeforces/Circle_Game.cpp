#include <bits/stdc++.h>
using namespace std;
int findMinIndex(int arr[], int size) {
    if (size <= 0) {
        
        return -1;  
    }

   
    auto minElementIter = std::min_element(arr, arr + size);

    
    int minIndex = minElementIter - arr;

    return minIndex;
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
        int minIndex=findMinIndex(arr, n);
        int turns=n*arr[minIndex]+minIndex;
        if (turns%2==0)
        {
            cout<<"Joe"<<endl;
        }
        else{
            cout<<"Mike"<<endl;
        }
        
    }
    return 0;
}