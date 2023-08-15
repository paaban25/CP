#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int Xenny[n],Yana[n];
        for (int i = 0; i < n; i++)
        {
            cin>>Xenny[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>Yana[i];
        }
        int Time1=0,Time2=0;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                Time1+=Xenny[i];
                Time2+=Yana[i];
            }
            else{
                Time1+=Yana[i];
                Time2+=Xenny[i];
            }
        }
        cout<<min(Time1,Time2)<<endl;
        
    }
    
	return 0;
}
