#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int successful_walks=0;
        for (int i = 0; i < n-1; i++)
        {
            if(fabs(arr[i+1]-arr[i])>=120){
                successful_walks++;
            }
        }
        cout<<((successful_walks>=2)?"YES":"NO")<<endl;
    }

    return 0;
}