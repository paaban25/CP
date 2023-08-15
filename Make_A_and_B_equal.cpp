#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n],B[n];
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>B[i];
        }
        int diff1=0,diff2=0;
        for (int i = 0; i < n; i++)
        {
            if(A[i]>B[i]){
                diff1+=A[i]-B[i];
            }
            else{
                diff2+=B[i]-A[i];
            }
           
        }
         if(diff1==diff2){
                cout<<diff1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        
    }
    return 0;
}