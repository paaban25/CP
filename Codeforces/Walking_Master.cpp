#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x_diff=(c-a),y_diff=(d-b);
        if(y_diff<0){
            cout<<-1<<endl;
        }
        else if(y_diff==0){
            if(x_diff>0){
                cout<<-1<<endl;
            }
            else if(x_diff==0){
                cout<<0<<endl;
            }
            else{
                cout<<fabs(x_diff)<<endl;
            }
        }
        else{
           if(x_diff>0){
                if(x_diff>y_diff){
                    cout<<-1<<endl;
                }
                else if(x_diff==y_diff){
                    cout<<x_diff<<endl;
                }
                else{
                    cout<<y_diff+y_diff-x_diff<<endl;
                }
           }
           else if(x_diff==0){
                cout<<y_diff+y_diff<<endl;
           }
           else{
                cout<<y_diff+y_diff+fabs(x_diff)<<endl;
           }
        }
    }
    
    return 0;
}