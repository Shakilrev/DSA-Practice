#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    int last;
    int i=0;
    int binary[32];
    while(n>0)
    {
        last=n%2;
        binary[i]=last ;
        n=n/2;
        i++;
    }
    for(int j = i-1 ; j>=0; j--)
    {
        cout<<binary[j];
    }
    cout<<endl;
}
void decimalToOctal(int n)
{
    int last;
    int i=0;
    int binary[32];
    while(n>0)
    {
        last=n%8;
        binary[i]=last ;
        n=n/8;
        i++;
    }
    for(int j = i-1 ; j>=0; j--)
    {
        cout<<binary[j];
    }
    cout<<endl;

}
void decimalToHexa(int n)
{
    int last;
    string hexa ;
    char ch;
    while(n>0)
    {
        last=n%16;
       if(last<10)
       {
        ch=last + 48;
       }
       else{
        ch = last + 55;
       }
       hexa = hexa + ch;
        n=n/16;
    
    }
    int i = 0 ; int j = hexa.size()-1;
    while(i<=j)
    {
        swap(hexa[i],hexa[j]);
        i++;
        j--;
    }
    cout<<"decimal to hexa : "<<hexa;

}
int main()
{
    int n;
    cin>>n;

   decimalToBinary(n);
   decimalToOctal(n);
   decimalToHexa(n);
}