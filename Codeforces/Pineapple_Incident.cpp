#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,x;
    cin>>t>>s>>x;
    int len=pow(10,9);
    int times[len];
    times[0]=t;
    for (int i = 1; i < len/2; i++)
    {
        if (i%2==1)
        {
            times[i]=t+s*(i+1)/2;
        }
        else{
            times[i]=times[i-1]+1;
        }
    }
    int counter=0;
    for (int i = 0; i < len; i++)
    {
        if (times[i]==x)
        {
            counter++;
        }
    }
    if (counter==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}