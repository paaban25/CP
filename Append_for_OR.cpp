// #include <iostream>                 https://www.codechef.com/problems/APPENDOR
#include<string>
using namespace std;
int decToBinary(int n)
{

    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string binary_num_string="";

    for (int j = i - 1; j >= 0; j--)
        binary_num_string+=binaryNum[j];
    int return_int=int(binary_num_string);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n >> y;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    return 0;
}