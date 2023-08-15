#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        int arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>arr[i][j];
            }   
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (arr[j][i]!='.')
                {
                    Y=i;
                    X=j;
                    break;
                }
                
            }   
        }
        int temp=X;
        while(arr[temp][Y]!='.'){
            cout<<arr[temp][Y];
            temp++;
        }
    }
    return 0;
}