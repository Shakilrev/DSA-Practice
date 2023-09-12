#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size ;
    cin>>size;
    int arr[size];
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }
    int current =0;
    for(int i =0 ; i<size ; i++)
    {
        current=0;
        for(int j=i;j<size ; j++)
        {
            current = current + arr[j];
            cout<<current<<endl;

        }

    }
        
    return 0;
}