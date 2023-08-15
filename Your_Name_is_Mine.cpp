#include <iostream>
#include <string>
using namespace std;
bool isSubsequence(string a, string b){
    int i=0, j=0;
    while(b[j]!='\0') {
        if(a[i]==b[j]) {
            i++;
        }
        j++;
    }
    if(a[i]=='\0') {
        return true;
    }
 
    else{
    return false;
    }
        
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string M, W;
        cin >> M >> W;
        if (M.length() == W.length())
        {
            int letter_match = 0;
            for (int i = 0; i < M.length(); i++)
            {
                if (M[i] == W[i])
                {
                    letter_match++;
                }
            }
            if (letter_match == M.length())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            string max_len = (M.length() > W.length()) ? M : W;
            string min_len = (M.length() < W.length()) ? M : W;
            if (isSubsequence(min_len,max_len)==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }
    }
    return 0;
}