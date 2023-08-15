#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int results[6];
    results[0]=(a+b)*c;
    results[1]=a*(b+c);
    results[2]=(a*b)+c;
    results[3]=a+(b*c);
    results[4]=a+b+c;
    results[5]=a*b*c;
    int max=INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (results[i]>max)
        {
            max=results[i];
        }
        
    }
    cout<<max<<endl;
    
    return 0;
}