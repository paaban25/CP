#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int police_free=0;
    int crimes_untreated=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            police_free+=arr[i];
        }
        else{
            if(police_free>0){
                police_free--;
            }
            else{
                crimes_untreated++;
            }
        }
    }
    cout<<crimes_untreated<<endl;
    
    return 0;
}