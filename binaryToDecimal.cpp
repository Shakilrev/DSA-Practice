#include<bits/stdc++.h>
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

int octalToDecimal(int num)
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

int hexaToDecimal(string num)
{
    int ans=0;
    int x=1;
   int s=num.size();
   for(int i = s-1 ; i>=0 ; i--)
   {
        if(num[i]>='0'  && num[i]<='9')
        {
            ans= ans+ x*(num[i]-'0');
        }
        else if(num[i]>='A'  && num[i]<='F')
        {
            ans= ans+ x*(num[i]-'A'+10);
        }
        x=x*16;
   }
    return ans;
}

int main()
{
    int binary;
    cout<<"enter a binary number : ";
    cin>>binary;
    int octal ;
    cout<<"enter a octal number : ";
    cin>>octal;
    string hexa ;
    cout<<"enter a hexa number : ";
    cin>>hexa;

    cout<<"binary to decimal value : "<<binaryToDecimal(binary)<<endl;
    cout<<"octal to decimal value : "<<octalToDecimal(octal)<<endl;
    cout<<"hexa to decimal value : "<<hexaToDecimal(hexa);
} 