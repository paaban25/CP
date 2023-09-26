#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n],req[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            req[i]=0;
        }
        int currentPos=0;
        for (int i = 0; i < n; i++)
        {
            int count=0;
            for (int j = i; j < n; j++)
            {
                if (arr[i]>arr[j])
                {
                    count++;
                }
                
            }
            if (count>0)
            {
                req[currentPos]=arr[i];
                currentPos++;
            }
        }
        int minNumb=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (req[i]<minNumb && req[i]>0)
            {
                minNumb=req[i];
            }  
        }
        int num=n-minNumb+1;
        if (num%2==0)
        {
            cout<<num/2;
        }
        else{
            cout<<(num/2)+1<<endl;
        }
        
        
        
    }
    return 0;
}