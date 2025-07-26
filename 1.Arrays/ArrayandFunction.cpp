#include<iostream>
using namespace std;

void inputarr(int arr[],int size);
void display(int arr[],int size);
int search(int arr[], int size , int key);

int main()
{
    int arr[100],size=0, key;

    cout<<"Enter the size of the array:";
    cin>> size;
    //taking input through inputarr function
    inputarr(arr,size);

    //displaying current array through display function

    display(arr,size);

    cout<<"Enter key to search:";
    cin>>key;

    //seaching the key through search function
    int result =  search(arr,size,key);

    if(result != -1)
    {
        cout<<"key found at index : " << result <<endl;
    }
    else{
        cout<<"key not found in the array  ";
    }

    return 0;
}

void inputarr(int arr[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {   
        cout<<"Enter the element at index :" << i <<"\t";
        cin>>arr[i];
    }
}

void display(int arr[], int size)
{   
    cout<<"the current array is:" <<"\t";

    for(int i = 0 ; i < size ; i++)
    { 
        cout<<arr[i] << "\t";
    }
    cout<<endl;
}

int search(int arr[], int size , int key)
{   
    for(int  i = 0 ; i < size ; i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }
    return -1;
}