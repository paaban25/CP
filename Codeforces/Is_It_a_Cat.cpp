#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int n;
        cin >> n;
        string sound;
        cin >> sound;
        transform(sound.begin(), sound.end(), sound.begin(), ::tolower);

        int valid = 0;
        for (int i = 0; i < n; i++)
        {
            if (sound[i] == 'm' || sound[i] == 'e' || sound[i] == 'o' || sound[i] == 'w')
            {
                valid++;
            }
        }
        if (valid != n)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (sound[i] == 'm')
                {
                    if (sound[i + 1] == 'm' || sound[i + 1] == 'e')
                    {
                        flag++;
                    }
                }
                else if (sound[i] == 'e')
                {
                    if (sound[i + 1] == 'e' || sound[i + 1] == 'o')
                    {
                        flag++;
                    }
                }
                else if (sound[i] == 'o')
                {
                    if (sound[i + 1] == 'w' || sound[i + 1] == 'o')
                    {
                        flag++;
                    }
                }
                else if (sound[i] == 'w')
                {
                    if (sound[i + 1] == 'w')
                    {
                        flag++;
                    }
                }
            }
            if (flag == n - 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}