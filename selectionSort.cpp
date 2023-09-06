#include<iostream>
using namespace std;
void selectionSort(int arr[],int s){
    for(int i=0 ; i<=s-2 ; i++)
    {
        for(int j=i+1 ; j<=s-1 ;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
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
 selectionSort(arr,size);
 return 0;
}