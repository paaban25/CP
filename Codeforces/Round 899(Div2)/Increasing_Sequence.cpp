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
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        if (n == 1)
        {
            if (A[0]==1)
            {
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
            
        }
        else
        {
            int B[n];
            A[0] == 1 ? B[0] = 2 : B[0] = 1;
            for (int i = 0; i < n - 2; i++)
            {
                if (A[i + 1] - B[i] == 1)
                {
                    B[i + 1] = B[i] + 2;
                }
                else
                {
                    B[i + 1] = B[i] + 1;
                }
            }
            if (A[n - 1] - B[n - 2] == 1)
            {
                cout << B[n - 2] + 2;
            }
            else
            {
                cout << B[n - 2] + 1 << endl;
            }
        }
    }
    return 0;
}