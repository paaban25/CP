#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* a=new int[n];
        int* b=new int[n];
        int* c=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            c[i]=a[i]+b[i];
        }
        int maxlike=0;
        int countmax=0;
        int maxindex=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>=maxlike){
                maxlike=a[i];
                countmax++;
                maxindex=i;
            }
        }
        if(countmax==1){
            cout<<maxindex+1;
        }
        else{
            
        }
        
        
        
    }
    return 0;
}