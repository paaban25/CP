#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if (b>=a)
        {
            cout<<b<<endl;
        }
        else{
            if (d>=c)
            {
                cout<<-1<<endl;
            }
            else{
                a-=b;
                long long dif = c - d;
                cout<<(b + (a + dif - 1) / dif * c)<<endl;

            }
        }  
    }
    return 0;
}