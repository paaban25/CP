#include <bits/stdc++.h>
using namespace std;
int countDistinctElements(int arr[], int n) {
    std::set<int> distinctElements;

    for (int i = 0; i < n; i++) {
        distinctElements.insert(arr[i]);
    }

    return distinctElements.size();
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
        if (countDistinctElements(arr,n)==2)
        {
            cout<<(n/2)+1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}