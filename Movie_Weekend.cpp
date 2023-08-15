#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int length[n],rating[n],product[n];
        for (int i = 0; i < n; i++)
        {
            cin>>length[i];
        }
        int max=0,temp=0;
        for (int i = 0; i < n; i++)
        {
            cin>>rating[i];
            if(length[i]*rating[i]>max){
                max=length[i]*rating[i];
                temp=i;
            }
            else if(length[i]*rating[i]==max){
                if(length[i]<length[temp]){
                    max=length[i]*rating[i];
                    temp=i;
                }
            }
        }
        cout<<temp+1<<endl;

        

        
    }
    return 0;
}