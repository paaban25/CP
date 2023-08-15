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
        int* msg=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>msg[i];
        }
        int mistakes=0;
        if (msg[0]!=msg[1])
        {
            mistakes++;
        }
        if(msg[n-2]!=msg[n-1]){
            mistakes++;
        }
        for (int i = 1; i < n-1; i++)
        {
            if ((msg[i]!=msg[i-1])||(msg[i]!=msg[i+1]))
            {
                mistakes++;
            }   
        }
        
        cout<<mistakes<<endl;
        
    }
    
    return 0;
}