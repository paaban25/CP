#include<bits/stdc++.h>
using namespace std;

// Swaps two numbers in array
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
   
    /**
     * Here we are running n-1 steps,
       for each step, max item will
       come at the last respective
       index and swap element if the
       element is smaller than the
       previous one.
     **/
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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int stick[n];
        for (int i = 0; i < n; i++)
        {
            cin>>stick[i];
        }
        sort(stick,n);
        int min_diff=INT_MAX;
        for (int i = 1; i < n-1; i++)
        {
            if(stick[i]-stick[i-1]+stick[i+1]-stick[i] < min_diff){
                min_diff=stick[i]-stick[i-1]+stick[i+1]-stick[i];
            }
        }
        cout<<min_diff<<endl;
        
    }
    
    return 0;
}