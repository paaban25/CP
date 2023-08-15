#include <bits/stdc++.h>           //490A
using namespace std;
int three_min(int a, int b, int c)
{
    int temp = min(a, b);
    temp = min(temp, c);
    return temp;
}
int index_of(int arr[], int num, int n)
{   
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            flag=1;
            return (i + 1);
            break;
        }
    }
    if(flag==0){
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int skills[n];
    int pg = 0, maths = 0, PE = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> skills[i];
        if (skills[i] == 1)
        {
            pg++;
        }
        else if (skills[i] == 2)
        {
            maths++;
        }
        else
        {
            PE++;
        }
    }
    if (pg * maths * PE > 0)
    {
        int output = three_min(pg, maths, PE);
        cout << output << endl;
        while (output--)
        {
            cout << index_of(skills, 1, n) << " " << index_of(skills, 2, n) << " " << index_of(skills, 3, n) << endl;
            skills[index_of(skills, 1, n)-1]=0;
            skills[index_of(skills, 2, n)-1]=0;
            skills[index_of(skills, 3, n)-1]=0;
        }
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}