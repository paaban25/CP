#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    int one_count=0;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       if(arr[i]==1){one_count++;}
    }
    if(one_count==0){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    return 0;
}