#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,q;
    cin>>p>>q;
    transform(p.begin(), p.end(), p.begin(), ::toupper);
    transform(q.begin(), q.end(), q.begin(), ::toupper);
    if(p==q){
        cout<<0<<endl;
    }
    else{
        for (int i = 0; i < p.length(); i++)
        {
            if(p[i]==q[i]){
                continue;
            }
            else{
                if(p[i]>q[i]){
                    cout<<1<<endl;
                    break;
                }
                else{
                    cout<<-1<<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}