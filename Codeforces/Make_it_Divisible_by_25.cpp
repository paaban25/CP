#include <bits/stdc++.h>
using namespace std;
int getNum(string s,char x,char y){
    int count=0,currentIndex;
    for (int i = s.length()-1; i >0; i--)
    {
        if(s[i]!=y){
            count++;
        }
        else{
            currentIndex=i;
            break;
        }
    }
    for (int i = currentIndex-1; i >0; i--)
    {
        if(s[i]!=x){
            count++;
        }
        else{
            break;
        }
    }
    
    return count;
}

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        ostringstream str1;
        str1 << n;
        string geek = str1.str();
        int arr[4];
        arr[0]=getNum(geek,'0','0');
        arr[1]=getNum(geek,'2','5');
        arr[2]=getNum(geek,'5','0');
        arr[3]=getNum(geek,'7','5');
        cout<<getMin(arr,4);
        cout<<endl;
    }
    return 0;
}