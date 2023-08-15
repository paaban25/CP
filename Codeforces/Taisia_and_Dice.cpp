#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int value=n-r;
        cout<<value<<"  ";
        for (int i = 1; i < n; i++)
        {
            while (r-value<n-i)
            {
                value--;
            }
            cout<<value<<"  ";
            r=r-value;
        }
    }   
    return 0;
}