#include<iostream>
#include<string>
using namespace std;
int count_distinct(string s, int n){
    int count=1;
    for (int i = 1; i < n; i++)
    {
        int pointer=0;
        for (int j = 0; j < i; j++)
        {
            if (s[i]!=s[j])
            {
                pointer++;
            } 
        }
        if (pointer==i)
        {
            count++;
        }   
    }
    return count;
}
int main()
{
    string s;
    cin>>s;
    int distinct=count_distinct(s,s.length());
    if (distinct%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
    
    
    return 0;
}