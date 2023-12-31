#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        sort(arr, arr + 3);
        int l = arr[0];
        int m = arr[1];
        int h = arr[2];
        int rem1=m%l;
        int rem2=h%l;
        if (rem1==0 &&rem2==0)
        {
            int pieces1=h/l;
            int pieces2=m/l;
            int cuts=pieces1+pieces2-2;
            if (cuts>3)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}