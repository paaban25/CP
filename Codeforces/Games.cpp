#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int matches=n*(n-1);
    int color[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>color[i][0];
        cin>>color[i][1];
    }
    int counter=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(color[i][0]==color[j][1]){
                counter++;
            }
            if(color[i][1]==color[j][0]){
                counter++;
            }
        }
        
    }
    cout<<counter<<endl;
    
    
    return 0;
}