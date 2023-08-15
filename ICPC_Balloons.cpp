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
        int position=n;
        for (int i = n-1; i > -1; i--)
        {
            if (arr[i]<=7)
            {
                position=i+1;
                break;
            }
            
        }
        cout<<position<<endl;
        
        
    }
    
    return 0;
}