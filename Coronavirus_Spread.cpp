 #include<iostream>         // https://www.codechef.com/problems/COVID19
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int* row=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>row[i];
        }
        int* distances=new int[n-1];
        for (int i = 0; i < n-1; i++)
        {
            distances[i]=row[i+1]-row[i];
        }
        
        
    }
    
    return 0;
}