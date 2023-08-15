#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int result = min(a, b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; 
}

int main()
{
    int y,w;
    cin>>y>>w;
    int maxm=max(y,w);
    int hcf=gcd(6-maxm+1,6);
    cout<<(7-maxm)/hcf<<"/"<<6/hcf<<endl;
    return 0;
}