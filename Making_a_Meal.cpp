#include<iostream>
#include<string>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string* arr=new string[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        double c_count=0,o_count=0,d_count=0,e_count=0,h_count=0,f_count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < arr[i].length(); j++)
            {
                if (arr[i][j]=='c')
                {
                    c_count++;
                }
                if (arr[i][j]=='o')
                {
                    o_count++;
                }
                if (arr[i][j]=='d')
                {
                    d_count++;
                }
                if (arr[i][j]=='e')
                {
                    e_count++;
                }
                if (arr[i][j]=='f')
                {
                    f_count++;
                }
                if (arr[i][j]=='h')
                {
                    h_count++;
                }
                
            }
            
        }
        c_count/=2;
        e_count/=2;
        double arr_count[6]={c_count,o_count,d_count,e_count,h_count,f_count};
        double min=INT_MAX;
        for (int i = 0; i < 6; i++)
        {
            if (arr_count[i]<=min)
            {
                min=arr_count[i];
            }
            
        }
        cout<<min<<endl;
        

    }
    return 0;
}