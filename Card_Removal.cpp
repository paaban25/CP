#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int* countarr=new int[n];
        for (int i = 0; i < n; i++)
        {
            int count=0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                }
                countarr[i]=count;              
            }   
        }
        int max=0;
        for (int i = 0; i < n; i++)
        {
            if(countarr[i]>=max){
                max=countarr[i];
            }
        }
        cout<<n-max<<endl;    
    }
    return 0;
}