#include<iostream>
using namespace std;
void insertionSort(int arr[],int s){
     for(int i=1 ; i<s ; i++)
     {
        int current = arr[i];
        int j= i-1;
        while (arr[j]> current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
     }
     for(int i =0 ; i<s ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"size : ";
    cin>>size;

    cout<<"array elements : ";

    int arr[size];
    for(int i =0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

 cout<<"sorted array : ";
 insertionSort(arr,size);
 return 0;
}