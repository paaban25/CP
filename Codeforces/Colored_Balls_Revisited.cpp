#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int* count=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>count[i];
        }
        int max=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(count[i]>=max){
                max=count[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(count[i]==max){
                cout<<i+1<<endl;
                break;
            }
        }
        
        
    }
    
    return 0;
}   