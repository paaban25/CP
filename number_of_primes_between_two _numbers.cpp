#include<iostream>
using namespace std;
int isPrime(int a){
    int factors=0;
    for (int i = 1; i <=a; i++)
    {
        if(a%i==0){
            factors++;
        }
    }
    if(factors==2){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--){
        int num1,num2;
        cin>>num1>>num2;
        for (int i = num1; i < num2+1; i++)
        {
            if(isPrime(i)==1){
                cout<<i<<"  ";
            }
        }
        
    }
    return 0;
}