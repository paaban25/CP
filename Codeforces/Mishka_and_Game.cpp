#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dice[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>dice[i][0];
        cin>>dice[i][1];
    }
    int m_wins=0,c_wins=0;
    for (int i = 0; i < n; i++)
    {
        if(dice[i][0]>dice[i][1]){
            m_wins++;
        }
        else if(dice[i][0]<dice[i][1]){
            c_wins++;
        }
    }
    if(m_wins>c_wins){
        cout<<"Mishka"<<endl;
    }
    else if(c_wins>m_wins){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}