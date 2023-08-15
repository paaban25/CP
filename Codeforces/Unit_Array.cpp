#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,negetive=0,positive=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            arr[i]==1? positive++:negetive++;
        }
        int steps=0;
        while(negetive>positive || negetive%2!=0 && negetive>0){
            steps++;
            positive++;
            negetive--;
        }
        cout<<steps<<endl;
    }
    return 0;
}