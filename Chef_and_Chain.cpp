#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(i%2==0 && s[i]=='+')
	        {
	            c++;
	        }else if(i&1 && s[i]=='-')
	        {
	            c++;
	        }
	        
	            
	        
	    }
	    if(c<=s.length()/2)
	    {
	        cout<<c<<endl;
	    }else{
	        cout<<(s.length()-c)<<endl;
	    }
	}
	return 0;
}
