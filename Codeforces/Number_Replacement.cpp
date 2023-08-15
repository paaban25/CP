#include<bits/stdc++.h>
using namespace std;
 
int countDistinct(int arr[], int n)
{
    int res = 1;
 
   
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        
        if (i == j)
            res++;
    }
    return res;
}
int cntDistinct(string str)
{
    
    unordered_set<char> s;
 
    
    for (int i = 0; i < str.size(); i++) {
 
       
        s.insert(str[i]);
    }
 
    
    return s.size();
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int length;
        cin>>length;
        string s;
        int* arr=new int[length];
        for (int i = 0; i < length; i++)
        {
            cin>>arr[i];
        }
        cin>>s;
        int arr_distinct=countDistinct(arr,length);
        int string_distinct=cntDistinct(s);
        if(arr_distinct>=string_distinct){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}