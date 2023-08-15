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
 
// Swaps two numbers in array


int main()
{
    int numbers[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>numbers[i];
    }
    sort(numbers,4);
    cout<<numbers[3]-numbers[0]<<" "<<numbers[3]-numbers[1]<<" "<<numbers[3]-numbers[2]<<endl;
    return 0;
}