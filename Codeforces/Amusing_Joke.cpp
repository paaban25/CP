#include<bits/stdc++.h>
using namespace std;

int main()
{
    string guest,host,letter_pile;
    cin>>guest>>host>>letter_pile;
    string actual_str=guest+host;
    sort(actual_str.begin(),actual_str.end());
    sort(letter_pile.begin(),letter_pile.end());
    if(letter_pile==actual_str){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    return 0;
}