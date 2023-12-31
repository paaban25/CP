#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num;
        cin>>num;
        string str=to_string(num);
        for (int i = 0; i < n-1; i++)
        {
            if (i%2==0)
            {
                int desired=0,index;
                for (int j = 0; j < n; j++)
                {
                    if (j%2==0)
                    {
                        if (int(str[j])%2==0)
                        {
                            desired++;
                            index=j;
                            break;
                        }
                    }
                }
                if (desired==0)
                {
                    
                }
                else{
                    
                }
            }
            else{

            }
        }
        
        
    }
    return 0;
}