#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int sum=0;
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(int(s[i])>=48 && int(s[i])<=57){
                sum+=int(s[i])-48;
            }
        }
        cout<<sum<<endl;
    }
    
	return 0;
}