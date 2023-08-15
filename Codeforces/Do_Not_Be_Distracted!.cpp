#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int days;
        cin>>days;
        string tasks;
        cin>>tasks;
        int flag=1;
        for (int i = 0; i < days-1; i++)
        {
            if(tasks[i]==tasks[i+1]){
                continue;
            }
            else{
                for (int j = i+1; j < days; j++)
                {
                    if(tasks[j]==tasks[i]){
                        flag=0;
                        break;
                    }
                }
                
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}