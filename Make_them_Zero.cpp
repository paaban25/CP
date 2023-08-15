#include<iostream>
#include<cmath>
using namespace std;
int is_zero(int arr[],int len){
    int flag=0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i]!=0)
        {
            flag=1;
            break;
        }       
    }
    if (flag==0)
    {
        return 1;
    }
    else{
        return 0;
    }    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int steps=0;
        while (is_zero(arr,n)!=1)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i]-=pow(2,steps);
                steps++;
            }           
        } 
        cout<<steps<<endl;   
    }
    
    return 0;
}
