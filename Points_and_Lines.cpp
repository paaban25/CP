#include<iostream>
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
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int points[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin>>points[i][j];
            }
            
        }
        int x_coordinates[n];
        int y_coordinates[n];
        for (int i = 0; i < n; i++)
        {
            x_coordinates[i]=points[i][0];
            y_coordinates[i]=points[i][1];
        }
        int x_distinct=countDistinct(x_coordinates, n);
        int y_distinct=countDistinct(y_coordinates, n);
        cout<<x_distinct+y_distinct<<endl;
        
    }
    
    return 0;
}