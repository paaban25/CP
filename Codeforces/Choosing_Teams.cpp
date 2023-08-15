#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int* times=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>times[i];
    }
    int limit=5-k;
    int eligible=0;
    for (int i = 0; i < n; i++)
    {
        if (times[i]<=limit)
        {
            eligible++;
        }
        
    }
    cout<<eligible/3<<endl;
    
    return 0;
}