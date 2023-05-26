#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n , sum=0 , lastdigit;
    cout<<"enter a number = ";
    cin>>n;
    int original_n = n;
    while(n>0)
    {
        lastdigit = n % 10;
        sum = sum + pow(lastdigit,3);
        n = n/10;

    }
    if(original_n==sum)
    {
    cout<<"Armstrong Number ";
    }
    else{
    cout<<"Not Armstrong Number";    
    }
    return 0;
}