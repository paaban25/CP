#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    int count=1;
    while (x%2!=0)
    {
        if(x%2==1){
            count++;
        }
            x=x/2;
        
    }
    cout<<count<<endl;
    

    return 0;
}