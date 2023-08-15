#include <bits/stdc++.h>
using namespace std;
int arr_found(string arr[],int len,string s){
    int index;
    for (int i = 0; i < len; i++)
    {
        if(arr[i]==s){
            index=i;
            break;
        }
    }
    return index;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string sizes[100];
        sizes[0] = "S";
        sizes[1] = "M";
        for (int i = 2; i < 52; i++)
        {
            string new_size = "";
            for (int j = 0; j < i-2; j++)
            {
                new_size+="X";
            }
            sizes[i]=new_size+"X";
            
        }
        int index_one=arr_found(sizes,100,a);
        int index_two=arr_found(sizes,100,b);
        if(index_one==index_two){
            cout<<"="<<endl;
        }
        else if(index_one>index_two){
            cout<<">"<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }

    return 0;
}