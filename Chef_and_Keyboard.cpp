#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,c;
        cin>>n>>m>>c;
        int sq_count=0;
        int rect_count=0;
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < m+1; j++)
            {
                if (i==j && i*j==c)
                {
                    sq_count++;
                }
                else if (i!=j && i*j==c)
                {
                    rect_count++;
                }   
            }            
        }
        cout<<sq_count+(rect_count)<<endl;   
    }  
    return 0;
}