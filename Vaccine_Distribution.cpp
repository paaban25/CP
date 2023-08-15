#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d,countRisk=0;
        cin>>n>>d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]<=9 || arr[i]>=80){
                countRisk++;
            }
        }
        int riskDays= countRisk%d==0? countRisk/d: countRisk/d +1;
        int normalDays= (n-countRisk%d)==0? (n-countRisk)/d: (n-countRisk)/d +1;
        cout<<riskDays+normalDays<<endl;
    }
    return 0;
}