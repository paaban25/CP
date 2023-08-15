#include <bits/stdc++.h>
using namespace std;
int countDistinct(string arr[], int n)
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
    
    

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string subStr[s.length()-1];
        for (int i = 0; i < s.length()-1; i++)
        {
            subStr[i]=s[i]+s[i+1];
        }
        cout<<countDistinct(subStr,s.length()-1)<<endl;
    }
    return 0;
}