#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int k;
        cin>>k;
        int below[k][2];
        int above[k][2];
        for (int i = 0; i < k; i++)
        {
            int a;
            cin>>a;
            below[i][0]=a;
            above[i][0]=a;
            below[i][1]=0;
            above[i][1]=h;
        }
        int l;
        cin>>l;
        int left[l][2];
        int right[l][2];
        for (int i = 0; i < l; i++)
        {
            int a;
            cin>>a;
            left[i][0]=0;
            right[i][0]=w;
            left[i][1]=a;
            right[i][1]=a;
        }
        int area1=(below[k-1][0]-below[0][0])*h;
        int area2=(w*(left[l-1][1]-left[0][1]));
        cout<<max(area1,area2)<<endl;
        
    }
    return 0;
}