#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string binary;
        cin>>binary;
        int count=0;
        if (n%2==0)
        {
            for (int i = 0; i < n/2; i++)
            {
                if (binary[i]!=binary[n-1-i])
                {
                    count++;
                }
                else{
                    break;
                }
            }
            
        }
        else{
            for (int i = 0; i < (n-1)/2; i++)
            {
                if (binary[i]!=binary[n-1-i])
                {
                    count++;
                }
                else{
                    break;
                }
            }
            
        }
        cout<<n-(2*count)<<endl;
    }
    
    return 0;
}