#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2][2];
        cin >> arr[0][0];
        cin >> arr[0][1];
        cin >> arr[1][0];
        cin >> arr[1][1];
        int indicatorOne = 0;
        int indicatorTwo = 0;
        if (arr[0][0] == arr[1][0])
        {
            indicatorOne++;
            if (arr[0][1] + arr[1][1] == arr[0][0])
            {
                indicatorTwo++;
            }
        }
        if (arr[0][0] == arr[1][1])
        {
            indicatorOne++;
            if (arr[0][1] + arr[1][0] == arr[0][0])
            {
                indicatorTwo++;
            }
        }
        if (arr[0][1] == arr[1][0])
        {
            indicatorOne++;
            if (arr[0][0] + arr[1][1] == arr[0][1])
            {
                indicatorTwo++;
            }
        }
        if (arr[0][1] == arr[1][1])
        {
            indicatorOne++;
            if (arr[0][0] + arr[1][0] == arr[0][1])
            {
                indicatorTwo++;
            }
        }
        if (indicatorOne==0)
        {
            cout<<"No"<<endl;
        }
        else{
            if (indicatorTwo==0)
            {
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        
    }
    return 0;
}