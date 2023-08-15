#include<iostream>
using namespace std;
void sort(int num[], int len);
void swapNums(int nums[],
              int first, int second);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
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
 
void swapNums(int nums[],
              int first, int second)
{
    int curr = nums[first];
    nums[first] = nums[second];
    nums[second] = curr;
}