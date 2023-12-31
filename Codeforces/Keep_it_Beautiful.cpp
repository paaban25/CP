#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        int arr[q];
        string answer="";
        for (int i = 0; i < q; i++)
        {
            cin>>arr[i];
        }
        // int firstElement=q;
        // for (int i = 0; i < q-1; i++)
        // {
        //     if (arr[i]>arr[i+1])
        //     {
        //         firstElement=i;
        //         break;
        //     }   
        // }
        // if (firstElement==q)
        // {
        //     for (int i = 0; i < q; i++)
        //     {
        //         answer+='1';
        //     }
            
        // }
        // else{
        //     for (int i = 0; i <=firstElement; i++)
        //     {
        //         answer+='1';
        //     }
        //     for (int i = firstElement+1; i < q-1; i++)
        //     {
        //         if (arr[i]<=arr[i+1] && arr[i]<arr[0])
        //         {
        //             answer+='1';
        //         }
        //         else{
        //             answer+='0';
        //         }
        //     }
        //     if (arr[q-1]<arr[0])
        //     {
        //         answer+='1';
        //     }
        //     else{
        //         answer+='0';
        //     }
        // }
        for (int i = 0; i < q; i++)
        {
            if (i==0)
            {
                answer+='1';
            }
            else{
                answer+='0';
            }
        }
        
        cout<<answer<<endl;
        
    }
    return 0;
}