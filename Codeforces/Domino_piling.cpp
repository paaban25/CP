#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m%2==0 && n%2==0){
        cout<<m*n/2<<endl;
    }
    else if(m%2!=0 && n%2==0){
        cout<<m*n/2<<endl;
    }
    else if(m%2==0 && n%2!=0){
        cout<<m*n/2<<endl;
    }
    else{
        cout<<((m-1)*(n-1)/2)+(m-1)/2+(n-1)/2<<endl;
    }
    return 0;
}