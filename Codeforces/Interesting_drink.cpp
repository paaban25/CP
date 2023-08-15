#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* prices=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>prices[i];
    }
    int q;
    cin>>q;
    int* coins=new int[q];
    for (int i = 0; i < q; i++)
    {
        cin>>coins[i];
    }
    for (int i = 0; i < q; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if (coins[i]>=prices[j])
            {
                count++;
            }   
        }
        cout<<count<<endl;
    }
    
    return 0;
}