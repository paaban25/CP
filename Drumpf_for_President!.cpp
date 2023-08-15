#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int* ptr=new int[n];
        int* votes=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ptr[i];
            votes[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            votes[ptr[i+1]-1]++;
        }
        int max=0;
        for (int i = 0; i < n; i++)
        {
            if (votes[i]>max)
            {
                max=i+1;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            if (ptr[i]==i+1)
            {
                max--;
            }
            
        }
        cout<<max<<endl;
        
        
        
        
    }
    
    return 0;
}