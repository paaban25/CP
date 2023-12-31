#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    int pairs = 0;
    sort(names, names + n);
    if (n % 2 == 0)
    {
        string class1[n / 2];
        string class2[n / 2];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                class1[i / 2] = names[i];
            }
            else
            {
                class2[(i - 1) / 2] = names[i];
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i + 1; j < n / 2; j++)
            {
                if (class1[i][0] == class1[j][0])
                {
                    pairs++;
                }
                if (class2[i][0] == class2[j][0])
                {
                    pairs++;
                }
            }
        }
        cout<<pairs<<endl;
    }
    else
    {
        string class1[n / 2];
        string class2[(n + 1) / 2];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                class1[i / 2] = names[i];
            }
            else
            {
                class2[(i - 1) / 2] = names[i];
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i + 1; j < n / 2; j++)
            {
                if (class1[i][0] == class1[j][0])
                {
                    pairs++;
                }
                
            }
        }
        for (int i = 0; i < (n+1) / 2; i++)
        {
            for (int j = i + 1; j < (n+1) / 2; j++)
            {
                if (class1[i][0] == class1[j][0])
                {
                    pairs++;
                }
                
            }
        }
        cout<<pairs<<endl;
    }

    return 0;
}