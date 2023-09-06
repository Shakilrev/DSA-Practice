#include<iostream>
using namespace std;
void bubbleSort(int arr[],int s){
    int counter = 1;
    while(counter<s)
    {
        for(int i =0 ; i<=s-counter ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
     for(int i = 0 ; i<s ; i++)
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
 bubbleSort(arr,size);
 return 0;
}