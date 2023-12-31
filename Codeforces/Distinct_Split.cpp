#include <bits/stdc++.h>
using namespace std;
int countDistinctElements(const std::string& str) {
    std::set<char> uniqueChars(str.begin(), str.end());
    return uniqueChars.size();
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[n-1];
        for (int i = 0; i < n-1; i++)
        {
            string pre=s.substr(0,i+1);
            string post=s.substr(i+1);
            arr[i]=countDistinctElements(pre)+countDistinctElements(post);

        }
        cout<<*max_element(arr, arr + n-1)<<endl;
        

    }
    
    return 0;
}