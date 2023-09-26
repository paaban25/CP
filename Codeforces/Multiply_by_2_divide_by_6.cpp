#include <bits/stdc++.h>
using namespace std;
int countPowerOf2(int n)
{
    int count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
    return count;
}
int countPowerOf3(int n)
{
    int count = 0;
    while (n % 3 == 0)
    {
        count++;
        n /= 3;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int power2=countPowerOf2(n);
        int power3=countPowerOf3(n);
        if (n!=pow(2,power2)*pow(3,power3))
        {
            cout<<-1<<endl;
        }
        else{
            if (power2>power3)
            {
                cout<<-1<<endl;
            }
            else{
                cout<<2*power3-power2<<endl;
            }
            
        }
        
    }
    return 0;
}