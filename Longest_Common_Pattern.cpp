#include <iostream>
#include <string>
using namespace std;
string eraseDemo(string str,int j)
{
    
    str.erase(str.begin() + j);
 
    cout << "After erase : ";
    return str;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = 0; i < a.length(); i++)
        {
            for (int j = 0; j < b.length(); i++)
            {
                if (a[i] == b[j])
                {
                    count++;
                    eraseDemo(b, j);
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}