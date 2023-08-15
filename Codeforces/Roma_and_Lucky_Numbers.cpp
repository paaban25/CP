#include <bits/stdc++.h>
using namespace std;
int countLucky(int n){
    string s = to_string(n);
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='4' || s[i]=='7')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(countLucky(arr[i])<=k){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}