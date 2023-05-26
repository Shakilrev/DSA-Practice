#include<iostream>
using namespace std ;
int main()
{
    int n , reverse=0 , lastdigit;
    cout<<"enter a number = ";
    cin>>n;

    while(n>0)
    {
        lastdigit = n % 10;
        reverse = reverse*10 + lastdigit;
        n = n/10;

    }
    cout<<"reverse : "<<reverse;
}