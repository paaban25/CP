#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        int arr[n+1];
        arr[0]=x;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                x++;
                arr[i+1]=x;
            }
            else{
                x--;
                arr[i+1]=x;
            }
        }
        cout<<countDistinct(arr,n)<<endl;
    }
    
	return 0;
}