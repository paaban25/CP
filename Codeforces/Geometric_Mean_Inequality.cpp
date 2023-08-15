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
        int pos = 0, neg = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] > 0 ? pos++ : neg++;
        }
        if ((pos % 2 != 0 && neg % 2 == 0) || (pos % 2 == 0 && neg % 2 != 0))
        {
            if (fabs(pos - neg) == 1)
            {
                cout << "YES" << endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        else if (pos % 2 != 0 && neg % 2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if (fabs(pos - neg)<=2)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}