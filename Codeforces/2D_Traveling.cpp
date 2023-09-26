#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        if (a<=k && b<=k)
        {
            cout<<0<<endl;
        }
        else if (a<=k && b>k)
        {
            int priceMin=INT_MAX;
            for (int i = 0; i < k; i++)
            { 
                priceMin = std::min(static_cast<double>(priceMin), fabs(arr[i][0] - arr[b - 1][0]) + fabs(arr[i][1] - arr[b - 1][1]));

            }
            cout<<priceMin<<endl;
        }
        else if (a>k && b<=k)
        {
            int priceMin=INT_MAX;
            for (int i = 0; i < k; i++)
            {
                priceMin = std::min(static_cast<double>(priceMin), fabs(arr[i][0] - arr[a - 1][0]) + fabs(arr[i][1] - arr[a - 1][1]));

            }
            cout<<priceMin<<endl;
        }
        
        else{
            int priceMinA=INT_MAX;
            for (int i = 0; i < k; i++)
            {
                priceMinA=min(static_cast<double>(priceMinA),(fabs(arr[i][0]-arr[a-1][0])+fabs(arr[i][1]-arr[a-1][1])));
            }
            int priceMinB=INT_MAX;
            for (int i = 0; i < k; i++)
            {
                priceMinB=min(static_cast<double>(priceMinB),(fabs(arr[i][0]-arr[b-1][0])+fabs(arr[i][1]-arr[b-1][1])));
            }
            cout<<priceMinA+priceMinB<<endl;
        }
    }
    return 0;
}