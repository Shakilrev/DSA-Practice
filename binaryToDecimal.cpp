#include<iostream>
using namespace std;

int binaryToDecimal(int num)
{
    int ans=0;
    int y=1;
    while(num>0)
    {
        int last = num % 10;
        ans = ans + (last*y);
        y=y*2;
        num=num/10;
    }
    return ans;
}

int binaryToOctal(int num)
{
    int ans=0;
    int y=1;
    while(num>0)
    {
        int last = num % 10;
        ans = ans + (last*y);
        y=y*8;
        num=num/10;
    }
    return ans;
}

int main()
{
    int binary;
    cout<<"enter a binary number : ";
    cin>>binary;
    cout<<"decimal value : "<<binaryToDecimal(binary)<<endl;
    cout<<"octal value : "<<binaryToOctal(binary);
}