#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string first, second;
        cin >> first >> second;
        for (int i = n - 1; i >= 0; i--)
        {
            first += second[i];
        }
        int equal = 0;
        int triple=0;
        for (int i = 0; i < n - 1; i++)
        {
            if (first[i] == first[i + 1])
            {
                equal++;
            }
        }
        for (int i = 0; i < m+n-2; i++)
        {
            if (first[i]==first[i+1] && first[i+1]==first[i+2])
            {
                triple++;
            }
            
        }
        
        if (equal <= 1 && triple==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}