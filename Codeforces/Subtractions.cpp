#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int low = min(a, b);
        int high = max(a, b);
        int count = 1;
        while (a >= 0 && b >= 0)
        {
            high=high-low;
            count++;
            if (high>low)
            {
                continue;
            }
            else if(high==low){
                break;
            }
            else{
                int temp=high;
                high=low;
                low=temp;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}