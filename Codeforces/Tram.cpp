#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    int people[n];
    int people_now=0;
    for (int i = 0; i < n; i++)
    {
        people[i]=people_now-arr[i][0]+arr[i][1];
        people_now=people_now-arr[i][0]+arr[i][1];
    }
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (people[i]>max)
        {
            max=people[i];
        }
        
    }
    cout<<max<<endl;
    
    return 0;
}