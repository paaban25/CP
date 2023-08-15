#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        int arr[2000];
        int counter=0;
        for (int i = 1; i < 2000; i++)
        {
            if(i%3==0){
                continue;
            }
            else if(i%10==3){
                continue;
            }
            else{
                arr[counter]=i;
                counter++;
            }
        }
        cout<<arr[k-1]<<endl;
    }
    
    return 0;
}