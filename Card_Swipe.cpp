#include <bits/stdc++.h>
using namespace std;

int maxArray(int arr[],int n){
    int maxm=0;
    for (int i = 0; i < n; i++)
    {
        maxm=max(maxm , arr[i]);
    }
    return maxm;
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
        int currentAttendance=0;
        int attendance[n];
        for (int i = 0; i < n; i++)
        {
            int count=0;
            for (int j = 0; j < i; j++)
            {
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            count%2==0 ? currentAttendance++ : currentAttendance--;
            attendance[i]=currentAttendance;
        }
        cout<<maxArray(attendance,n)<<endl;
        
    }
    return 0;
}