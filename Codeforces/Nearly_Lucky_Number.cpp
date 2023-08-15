#include <iostream>
#include <sstream> // for string streams
#include <string>  // for string
using namespace std;
int main()
{
    long long int num;
    cin >> num;
    ostringstream str1;
    str1 << num;
    string geek = str1.str();
    int count = 0;
    for (int i = 0; i < geek.length(); i++)
    {
        if (geek[i] == '4' || geek[i] == '7')
        {
            count++;
        }
    }
    
    
        if (count == 4 || count == 7)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    

    return 0;
}