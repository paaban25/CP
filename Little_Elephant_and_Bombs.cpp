
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string bombs;
        cin>>bombs;
        int result[n];
        for (int i = 0; i < n; i++)
        {
            result[i]=0;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (bombs[i]=='1')
            {
                if (i==0)
                {
                    result[0]=result[1]=1;
                }
                else if (i==n-1)
                {
                    result[n-1]=result[n-2]=1;
                }
                else{
                    result[i]=result[i-1]=result[i+1]=1;
                }
                
            }
            
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (result[i]==0)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
        
        
    }
    
    return 0;
}
// #include <iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string bombs;
//         cin >> bombs;
//         int non_blast = 0;
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (bombs[i - 1] == '0' && bombs[i + 1] == '0' && bombs[i] == '0')
//             {
//                 non_blast++;
//             }
//         }
//         if (bombs[0] == '0' && bombs[1]=='0')
//         {
//             non_blast++;
//         }
//         if (bombs[n - 1] == '0' && bombs[n-2]=='0')
//         {
//             non_blast++;
//         }
//         cout<<non_blast<<endl;
//     }

//     return 0;
// }