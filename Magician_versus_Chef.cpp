#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        int arr[s][2];
        for (int i = 0; i <s; i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];  
        }
        for (int i = 0; i <s; i++)
        {
            if (x==arr[i][0])
            {
                x=arr[i][1];
                continue;
            }
            if (x==arr[i][1])
            {
                x=arr[i][0];
            }   
        }
        cout<<x<<endl;

    }
    return 0;
}