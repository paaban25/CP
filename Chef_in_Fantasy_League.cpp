#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        int * price=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>price[i];
        }
        int * players=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>players[i];
        }
        int price_left=100-s;
        int forward_min=INT_MAX,defender_min=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (players[i]==1)
            {
                if (price[i]<=forward_min)
                {
                    forward_min=price[i];
                }               
            }
            if (players[i]==0)
            {
                if (price[i]<=defender_min)
                {
                    defender_min=price[i];
                }
            }            
        }
        int min_price= forward_min+defender_min;
        if (min_price<=price_left){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }   
    return 0;
}