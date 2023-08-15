#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        int num=fabs(n);
        int last=num%10;
        int second_last=(num%100)/10;
        ostringstream str1;
        str1 << num;
        string geek = str1.str();
        if(last>=second_last){
            geek.erase(geek.length()-1,geek.length()-1);
            cout<<"-"<<geek<<endl;
        }
        else{
             geek.erase(geek.length()-2,geek.length()-2);
            cout<<"-"<<geek<<endl;
        }
    }
    return 0;
}