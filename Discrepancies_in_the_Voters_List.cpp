#include <iostream>
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
 


int main() {
	int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int n=n1+n2+n3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==arr[i-1]){
            arr[i-1]=-1;
        }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=-1 && arr[i-1]==-1){
            count++;
        }
    }
    cout<<count<<endl;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=-1 && arr[i-1]==-1){
            cout<<arr[i]<<endl;
        }
    }
    
    
    
    
	return 0;
}
