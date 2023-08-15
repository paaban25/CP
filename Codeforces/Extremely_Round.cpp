#include<bits/stdc++.h>
using namespace std;
int is_round(int num){
    ostringstream str1;
    str1 << num;
    string geek = str1.str();
    int zero_count=0;
    for (int i = 0; i < geek.length(); i++)
    {
        if(geek[i]=='0'){
            zero_count++;
        }
    }
    if(zero_count==geek.length()-1){
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
        int n;
        cin>>n;
        int rounded=0;
        for (int i = 1; i < n+1; i++)
        {
            if(is_round(i)==1){
                rounded++;
            }
        }
        cout<<rounded<<endl;
        
    }
    
    return 0;
}