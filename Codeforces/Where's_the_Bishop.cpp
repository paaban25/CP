#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int row=0,col=0;
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>arr[i][j];
            } 
        }
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#')
                {
                    row=i+1;
                    col=j+1;
                }
                
            } 
        }
        cout<<row<<" "<<col<<endl;
    }
    return 0;
}