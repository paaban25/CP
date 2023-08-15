#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string basic="I hate";
    for (int i = 1; i < n; i++)
    {
        if(i%2==0){
            basic+=" that I hate";
        }
        else{
            basic+=" that I love";
        }
    }
    basic+=" it";
    cout<<basic<<endl;
    
    return 0;
}