#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size ,maximum=INT_MIN , minimum=INT_MAX;
    cout<<"enter array size : ";
    cin>>size;

    int arr[size];
    cout<<"enter array elements : "<<endl;

    for(int i = 0 ; i <size ; i++)
    {
        cout<<"element"<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i = 0 ; i <size ; i++)
    {
       maximum =max(maximum,arr[i]);
       minimum = min(minimum,arr[i]); 
    }
    
    cout<<"maximum number : "<<maximum<<endl;
    cout<<"minimum number : "<<minimum<<endl;
    
}