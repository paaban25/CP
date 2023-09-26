#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5];
    int inp;
    for (int i = 0; i < 5; i++)
    {
        
        cin >> inp;
        inp > 5 ? A[i] = -1 * (inp) : inp;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<" ";
    }
    

    return 0;
}