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
            int inp;
            cin >> inp;
            inp > n ? A[i] = -1 * (inp) : inp;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<A[i]<<" ";
        }
        
        int score = 0;
        int currentLength = n;
        for (int i = 0; i < n; i++)
        {
            int scoreAdd = *max_element(A, A + n);
            if (scoreAdd <= 0)
            {
                break;
            }

            else
            {
                if (scoreAdd > currentLength)
                {

                    int x = std::distance(A, std::find(A, A + n, scoreAdd));
                    A[x] = -1 * A[x];
                    continue;
                }
                else
                {
                    score += scoreAdd;
                    int x = std::distance(A, std::find(A, A + n, scoreAdd));
                    A[x] = -1 * A[x];
                    currentLength--;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}