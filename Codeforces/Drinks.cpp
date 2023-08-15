#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double* percent=new double[n];
    double sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>percent[i];
        sum+=percent[i];
    }
    cout<<sum/(n)<<endl;
    
    return 0;
}