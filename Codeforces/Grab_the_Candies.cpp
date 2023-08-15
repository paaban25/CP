#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int even=0,odd=0;
        int* candies=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>candies[i];
            candies[i]%2==0?(even+=candies[i]):(odd+=candies[i]);
        }
        even>odd?(cout<<"YES"):cout<<"NO";
        cout<<endl;
    }
    
    return 0;
}