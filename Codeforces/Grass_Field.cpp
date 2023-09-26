#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[2][2];
        int countOne=0;
        for (int i = 0; i < 2; i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
            if (arr[i][0]==1  )
            {
                countOne++;
            }
            if (arr[i][1]==1  )
            {
                countOne++;
            }
        }
        if (countOne==0)
        {
            cout<<0<<endl;
        }
        else if (countOne==4)
        {
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
        
    }
    return 0;
}