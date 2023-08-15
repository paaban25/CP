#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        char s;
        
        cin>>s;
        if (s=='+')
        {
            arr[i][0]=1;
        }
        else{
            arr[i][0]=0;
        }
        cin>>arr[i][1];
    }
    int currentCount=x,distressedChild=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i][0]==1){
            currentCount+=arr[i][1];
        }
        else{
            if (currentCount<arr[i][1])
            {
                distressedChild++;
            }
            else
            {
                currentCount-=arr[i][1];
            }    
        }
    }
    cout<<currentCount<<" "<<distressedChild<<endl;
    return 0;
}