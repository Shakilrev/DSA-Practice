#include<iostream>
#include<climits>
using namespace std;


void linearSearch(int arr[],int n,int key)
{
    bool found=false;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==key)
        {
            cout<<"key is found at index "<<i;
            found = true;
            break;
        }
    }
    if(found ==false){
        cout<<"not found";
    }

}
int main()
{
    int size , key;
    cout<<"enter array size : ";
    cin>>size;
    cout<<"enter key :";
    cin>>key;

    int arr[size];
    cout<<"enter array elements : "<<endl;

    for(int i = 0 ; i <size ; i++)
    {
        cout<<"element"<<i+1<<" : ";
        cin>>arr[i];
    }

    linearSearch(arr,size,key);
}