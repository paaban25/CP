#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* cards=new int[n];
    int sereja=0,dima=0;
    for (int i = 0; i < n; i++)
    {
        cin>>cards[i];
    }
    int forward=0,backward=n-1;
    int turn=0;
    if(n%2==0){
        for (int i = 0; i < n; i++)
        {
            if(turn%2==0){
                sereja+=max(cards[forward],cards[backward]);
                cards[forward]>cards[backward]?forward++:backward--;
            }
            else{
                 dima+=max(cards[forward],cards[backward]);
                cards[forward]>cards[backward]?forward++:backward--;
            }
            turn++;
        }
        
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if(turn%2==0){
                sereja+=max(cards[forward],cards[backward]);
                cards[forward]>cards[backward]?forward++:backward--;
            }
            else{
                 dima+=max(cards[forward],cards[backward]);
                cards[forward]>cards[backward]?forward++:backward--;
            }
            turn++;
        }
        
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}