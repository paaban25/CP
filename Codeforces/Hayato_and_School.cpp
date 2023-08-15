#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int odd_count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2!=0){
                odd_count++;
            }
        }
        if(n==3){
            if(odd_count==3){
                cout<<"YES"<<endl;
                cout<<1<<" "<<2<<" "<<3<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(odd_count==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                if(odd_count==1){
                    int even=0;
                    for (int i = 0; i < n; i++)
                    {
                        if(arr[i]%2!=0){
                            cout<<i+1<<" ";
                        }
                        else{
                            if(even==2){
                                break;
                            }
                            cout<<i+1<<" ";
                            even++;

                        }
                    }
                    
                }
                
            }
        }
        
        
    }
    
    return 0;
}