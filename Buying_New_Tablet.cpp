#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int tab[n][3];
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>tab[i][j];
            }
            
        }
        int area_price[n][2];
        for(int i=0;i<n;i++){
            area_price[i][0]=tab[i][0]*tab[i][1];
            area_price[i][1]=tab[i][2];
        }
       

        int flag=0;
        int maxarea=0;
        for(int i=0;i<n;i++){
            if (area_price[i][1]<=b)
            {
               flag=1;
               if(area_price[i][0]>=maxarea){
                maxarea=area_price[i][0];
               }
            }
            
        }
        if(flag==0){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<maxarea<<endl;
        }

        
    }
    return 0;
}