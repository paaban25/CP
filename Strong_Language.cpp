#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int factor=0;
        for (int i = 0; i < n; i++)
        {
            int cnt=0;
            for (int j = i; j <i+k ; j++)
            {
                if (s[j]=='*')
                {
                    cnt++;
                }
            }
              
            
            if (cnt==k)
            {
                factor++;
            }
        }
        if (factor==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
    }

    return 0;
}