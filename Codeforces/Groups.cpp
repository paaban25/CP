#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][5];
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
            cin>>arr[i][2];
            cin>>arr[i][3];
            cin>>arr[i][4];
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i!=j)
                {
                    int day1=i,day2=j;
                    int c1=0,c2=0,c=0;
                    for (int k = 0; k < n; k++)
                    {
                        if (arr[k][day1]==1)
                        {
                            c1++;
                        }
                        if (arr[k][day2]==1)
                        {
                            c2++;
                        }
                        if (arr[k][day1]==0 && arr[k][day2]==0)
                        {
                            c++;
                        }  
                    }
                    if (c1>=n/2 && c2>=n/2 && c==0)
                    {
                        flag=1;
                    }
                    
                }
                
            }
            
        }
        if (flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}