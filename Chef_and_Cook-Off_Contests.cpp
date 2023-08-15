#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string difficulty[n];
        for (int i = 0; i < n; i++)
        {
            cin>>difficulty[i];
        }
        int cakewalk=0;
        int simple=0;
        int easy=0;
        int easy_medium=0;
        int medium=0;
        int medium_hard=0;
        int hard=0;
        for (int i = 0; i < n; i++)
        {
            if (difficulty[i]=="cakewalk")
            {
                cakewalk++;
            }
            else if (difficulty[i]=="simple")
            {
                simple++;
            }
            else if (difficulty[i]=="easy")
            {
                easy++;
            }
            else if (difficulty[i]=="easy-medium")
            {
                easy_medium++;
            }
            else if (difficulty[i]=="medium")
            {
                medium++;
            }
            else if (difficulty[i]=="medium-hard")
            {
                medium_hard++;
            }
            else{
                hard++;
            }   
        }  
        if ((cakewalk>=1)&&(simple>=1)&&(easy>=1)&&(easy_medium>=1 || medium>=1)&&(medium_hard>=1 || hard>=1))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
         
    }   
    return 0;
}