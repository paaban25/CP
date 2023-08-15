#include<bits/stdc++.h>
using namespace std;
int is_distinct(int arr[],int len,int index){
    int counter=0;
    for (int i = 0; i < index; i++)
    {
        if(arr[i]!=arr[index]){
            counter++;
        }
    }
    if(counter==index){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;cin>>n;
    int required=n*(n+1)/2;
    int p;cin>>p;
    int levels[2*p];
    for (int i = 0; i < 2*p; i++)
    {
        cin>>levels[i];
    }
    int sum=0;
    for (int i = 0; i < 2*p; i++)
    {
        if(is_distinct(levels,2*p,i)==1){
            sum+=levels[i];
        }
    }
    if(sum==required){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}