#include <iostream>
using namespace std;

int main() {
	string s;
    cin>>s;
    int n;
    cin>>n;
    
    while (n--)
    {
        string x;
        cin>>x;
        int letterPresent=0;
        for (int i = 0; i < x.length(); i++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if(s[j]==x[i]){
                    letterPresent++;
                    break;
                }
            }
            
        }
        if(letterPresent==s.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
	return 0;
}