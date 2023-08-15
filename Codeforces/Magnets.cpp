#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string* arr=new string[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    string order="";
    for (int i = 0; i < n; i++)
    {
        order+=arr[i];
    }
    int count=1;
    for (int i = 1; i < 2*n; i++)
    {
        if (order[i]==order[i-1])
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    
    
    return 0;
}