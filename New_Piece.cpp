#include<iostream>
using namespace std;
int color_comp(int a,int b,int p, int q){
    int c=(a+b)%2;
    int r=(p+q)%2;
    if(r==c){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if (color_comp(a,b,p,q)==1)
        {
            if (a!=p && b!=q)
            {
                cout<<2<<endl;
            }
            else if(a==p && b==q){
                cout<<0<<endl;
            }
            else{
                cout<<2<<endl;
            }
            
        }
        else{
            cout<<1<<endl;
        }

    }
    
    return 0;
}