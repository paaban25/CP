#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int a=arr[0];
    int b=arr[1];
    int c=arr[2];
    int d=arr[3];
    if ((a+b>c && b+c>a && a+c>b) || (b+c>d && b+d>c && c+d>b)  )
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if (a+b==c || b+c==a || a+c==b || b+c==d || b+d==c || c+d==b)
    {
        cout<<"SEGMENT"<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}