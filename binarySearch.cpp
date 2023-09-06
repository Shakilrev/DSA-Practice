#include<iostream>
using namespace std;
int binarySearch(int arr[],int n , int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    return -1;
}
int main()
{
    int n ; 
    cout<<"enter size : ";
    cin>>n;
    cout<<"enter array elements :"<<endl;
     int arr[n];
     for(int i =0 ; i<n ; i++)
     {
        cin>>arr[i];

     }
     int key;
     cin>>key;
     int result  = binarySearch(arr,n,key);
     if(result == -1){
        cout<<"not found";
     }else{
        cout<<"found at index "<<result;
     }
     return 0;
}