#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int* arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element_having_max_freq)
        {
            count++;
        }
        
    }
    return count;
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
        if (mostFrequent( arr, n)>n/2)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}