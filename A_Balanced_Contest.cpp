#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,p;
        cin>>n>>p;
        int attempts[n];
        for (int i = 0; i < n; i++)
        {
            cin>>attempts[i];
        }
        int hard=0;
        int cakewalk=0;
        
        for (int i = 0; i <n ; i++)
        {
            if (attempts[i]>=p/2)
            {
                cakewalk++;
            }
            else if (attempts[i]<=p/10)
            {
                hard++;
            }   
        }
        if (cakewalk==1 && hard==2)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
        
        
    }
    
    return 0;
}