#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, H,count=0;;

        cin >> n >> m >> k >> H;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i]-=H;
            if (fabs(arr[i])<=(m-1)*k && arr[i]%k==0 && arr[i]!=0)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}