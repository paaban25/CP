#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string directions;
        cin>>directions;
        int current_x,current_y;
        current_x=current_y=0;
        int points[n][2];
        for (int i = 0; i < n; i++)
        {
            if (directions[i]=='L')
            {
                current_x--;
            }
            else if (directions[i]=='R')
            {
                current_x++;
            }
            else if (directions[i]=='U')
            {
                current_y++;
            }
            else{
                current_y--;
            }
            points[i][0]=current_x;
            points[i][1]=current_y;
        }
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if (points[i][0]==1 && points[i][1]==1)
            {
                flag++;
            }
            
        }
        if (flag>0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}