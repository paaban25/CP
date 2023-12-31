#include <bits/stdc++.h>
using namespace std;
int isLucky(string s){
    if (s.length()%2==0)
    {
        int sum1=0,sum2=0;
        for (int i = 0; i < s.length()/2; i++)
        {
            sum1+=int(s[i]);
            sum2+=int(s[s.length()-1-i]);
        }
        if (sum1==sum2)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
    
}
int main()
{
    int n;
    cin>>n;
    string tickets[n];
    for (int i = 0; i < n; i++)
    {
        cin>>tickets[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isLucky(tickets[i]+tickets[j])==1)
            {
                count++;
            }
            
        }
        
    }
    cout<<count<<endl;
    
    
    return 0;
}