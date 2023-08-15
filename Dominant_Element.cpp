#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int num, int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        if (num == arr[i])
        {
            total++;
        }
    }
    return total;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int frequency[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frequency[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((count(arr, arr[j], n)) == i + 1)
                {
                    frequency[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            frequency[i]=frequency[i]/i+1;
        }
        
        for (int i = n-1; i >=0; i--)
        {
            if(frequency[i]!=0){
                if(frequency[i]==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            cout<<frequency[i]<<endl;
        }
        
    }

    return 0;
}