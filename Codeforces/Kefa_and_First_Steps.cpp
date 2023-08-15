#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* scores=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>scores[i];
    }
    int streak[n];
    for (int i = 0; i < n-1; i++)
    {
        int count=1;
        for (int j = i; j<n-1; j++)
        {
            if (scores[j]<=scores[j+1])
            {
                count++;
            }
            else{
                break;
            }
            
        }
        streak[i]=count;
    }
    streak[n-1]=1;
    
    int max=streak[0];
    for (int i = 0; i < n; i++)
    {
        if (max<=streak[i])
        {
            max=streak[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
}