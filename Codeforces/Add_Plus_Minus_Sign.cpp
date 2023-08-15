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
        string a,output="";
        cin>>a;
        int count_one=0;
        for (int i = 0; i < n; i++)
        {
            if(i==0){
                if(a[i]=='1'){
                    count_one++;
                }
            }
            else{
                if(a[i]=='1'){
                    count_one++;
                    if(count_one%2==0){
                        output+='-';
                    }
                    else{
                        output+='+';
                    }
                }
                else{
                    output+='+';
                }
            }
            
        }
        
        cout<<output<<endl;
    }
    
    return 0;
}