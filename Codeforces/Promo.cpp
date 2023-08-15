#include<bits/stdc++.h>
using namespace std;
void swapNums(int nums[],
              int first, int second)
{
    int curr = nums[first];
    nums[first] = nums[second];
    nums[second] = curr;
}
void sort(int num[], int len)
{
    bool isSwapped;
   
   
    for (int i = 0; i < len; i++)
    {
        isSwapped = false;
        for (int j = 1; j < len - i; j++)
        {
            if (num[j] < num[j - 1])
            {
                swapNums(num, j, (j - 1));
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}
 


int main()
{
    int n,q;
    int* price=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>price[i];
    }
    sort(price,n);
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        int sum_free=0;
        if(x==y){
            for (int i = n-1; i >=0; i--)
            {
                sum_free+=price[i];
            }
            
        }
        else{
            int diff=fabs(x-y);
            for (int i = n-1-diff; i > n-1-diff-y; i--)
            {
                sum_free+=price[i];
            }
            
        }
        cout<<sum_free<<endl;
    }
    
    
    return 0;
}