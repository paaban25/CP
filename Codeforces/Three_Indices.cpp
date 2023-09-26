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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int indicator = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int minIndex, maxIndex;
            for (int j = 0; j < i; j++)
            {

                if (arr[j] < arr[i])
                {
                    indicator++;
                    minIndex = j + 1;
                    break;
                }
            }
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    indicator++;
                    maxIndex = j + 1;
                    break;
                }
            }
            if (indicator == 2)
            {
                cout<<"YES"<<endl;
                cout<<minIndex<<" "<<i+1<<" "<<maxIndex<<endl;
                break;
            }
            
        }
        if (indicator<2)
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}