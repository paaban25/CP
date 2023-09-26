#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    double arr[n][3];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>arr[i][2];
    }
    double time[n];
    for (int i = 0; i < n; i++)
    {
        double x=arr[i][0]-a;
        double y=arr[i][1]-b;
        double speed=arr[i][2];
        double timeTaken=sqrt(x*x+y*y)/speed;
        time[i]=timeTaken;
    }
    double minTime=time[0];
    for (int i = 1; i < n; i++)
    {
        minTime=min(minTime,time[i]);
    }
    cout<<minTime<<endl;
    return 0;
}