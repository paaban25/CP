#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<floor((fabs(a-b))/2)<<endl;
    return 0;
}