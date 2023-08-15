#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int hundreds=n/100;
    n=n%100;
    int twenty=n/20;
    n=n%20;
    int ten=n/10;
    n=n%10;
    int five=n/5;
    n=n%5;
    int notes=hundreds+twenty+ten+five+n;
    cout<<notes<<endl;
    
    
    return 0;
}