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
        int alice=0,bob=0;
        int turn=0;
        int cards_given=0;
        int cards=1;
        while (cards_given<=n)
        {
           if(turn=0){
            alice+=cards;
            turn=1;
           }
           else{
            bob+=cards;
            turn=0;
           }
           cards+=4;
        }
        int left=n-cards_given;
        turn==0?(alice+=left):(bob+=left);
        cout<<alice<<" "<<bob<<endl;
        
    }
    
    return 0;
}