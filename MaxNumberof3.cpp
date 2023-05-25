#include<iostream>
using namespace std;
int main()
{
    int a,b,c ;
    cout<<"enter 3 inputs = ";
    cin>>a>>b>>c;

    if(a>b)
    {
        if (a>c)
        {
        cout<<"max number = "<<a;
        }
        else
        {
            cout<<"max number = "<<c;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<"max = "<<c;
        }
        else
        {
            cout<<"max = "<<c;
        }
    }
    return 0;
}