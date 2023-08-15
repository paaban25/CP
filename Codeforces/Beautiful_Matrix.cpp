#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int row_num, column_num, row_diff, column_diff;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row_num = i + 1;
                column_num = j + 1;
            }
        }
    }
    row_diff = fabs(3 - row_num);
    column_diff = fabs(3 - column_num);
    cout << row_diff + column_diff << endl;
    return 0;
}