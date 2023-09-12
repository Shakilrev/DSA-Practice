#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int maximum = INT_MIN;
    int size ;
    cin>>size;
    int arr[size];
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }
    for(int i =0 ; i<size ; i++)
    {
        maximum = max(maximum,arr[i]);
        cout<<maximum<<endl;
    }
    return 0;
}