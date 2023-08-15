#include<bits/stdc++.h>
using namespace std;
int is_distinct(int num){
    ostringstream str1;
    str1 << num;
    string geek = str1.str();
    int flag=1;
    for (int i = 1; i < geek.length(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(geek[i]==geek[j]){
                flag=0;
                break;
            }
        }
        
    }
    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }
    
}
int main()
{
    int year;
    cin>>year;
    for (int i = year+1; ; i++)
    {
        if(is_distinct(i)==1){
            cout<<i<<endl;
            break;
        }
        
    }
    
    

    return 0;
}
