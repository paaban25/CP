#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int* ptr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ptr[i];
        }
        int streak=0;
        for (int i = 0; i < n; i++)
        {
            if (ptr[i]==1)
            {
                streak++;
            }
            else{
                break;
            }
            
        }
        if (streak==n)
        {
            cout<<100<<endl;
        }
        else if (streak>=m)
        {
            cout<<k<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
        
        
        
    }
    
    return 0;
}