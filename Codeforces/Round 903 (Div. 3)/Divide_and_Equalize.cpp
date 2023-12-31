#include <bits/stdc++.h>
using namespace std;
bool isBthPower(double a, int b) {
    if (b == 0) {
        return a == 1; 
    }
    double root = pow(a, 1.0 / b); 
    int intRoot = static_cast<int>(root); 

   
    return (pow(intRoot, b) == a);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double arr[n];
        double product=1;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            product*=arr[i];
        }
        if (isBthPower(product,n))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}