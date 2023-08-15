#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, u, d;
        cin >> n >> u >> d;
        int height[n];
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        int position = 1;
        int lives = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (height[i] == height[i + 1])
            {
                position++;
                continue;
            }
            else if (height[i] < height[i + 1])
            {
                if (height[i + 1] - height[i] <= u)
                {
                    position++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (height[i] - height[i + 1] <= d)
                {
                    position++;
                }
                else
                {
                    lives--;
                    position++;
                }
            }
            if (lives == 0)
            {
                break;
            }
        }
        cout << position << endl;
    }
    return 0;
}