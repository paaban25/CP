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
        int* arr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    continue;
                }
                
                else if (arr[i]+arr[j]>=arr[i]*arr[j])
                {
                    count++;
                }
            }           
        }
        cout<<count/2<<endl;
        
        
    }
    
    return 0;
}