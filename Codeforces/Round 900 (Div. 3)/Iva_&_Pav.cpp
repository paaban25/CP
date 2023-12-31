#include <bits/stdc++.h>
using namespace std;
int andFunction(int a,int b){
    return a&b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int q;
        cin >> q;
        int queries[q][2];
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i][0];
            cin >> queries[i][1];
        }
        for (int i = 0; i < q; i++)
        {
            int AND = arr[queries[i][0]];
            int currentCursor = queries[i][0];

            while (AND < queries[i][1])
            {
                currentCursor++;
                int operand=arr[currentCursor ];
                AND = andFunction(AND,operand);
                if (currentCursor == n)
                {
                    break;
                }
            }
            if (AND < queries[i][1])
            {
                cout<<-1<<" ";
            }
            else{
                cout<<currentCursor<<endl;
            }
            cout << endl;
        }
    }
    return 0;
}