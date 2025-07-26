#include<iostream>
using namespace std;

void inputarr(int arr[],int n);
void display(int arr[],int n);
void reverse(int arr[], int n);
int main()
{
    int arr[100],size;
    cout<<"enter the size of the array";
    cin>>size;

    inputarr(arr,size);
    cout<<"the current array is:" <<endl;
    display(arr,size);
    reverse(arr,size);
}

void inputarr(int arr[],int n){
    for(int i = 0 ; i<n ;i++)
    {
        cout<<"enter the element at index" <<i <<":" << "\t";
        cin>>arr[i];
    }
}

void display(int arr[],int n){
    for(int i = 0 ; i<n ;i++)
    {
        cout<<arr[i];
    }
}

void reverse(int arr[], int n){
    int i,j,temp;
    for(i = 0 ,j = n-1; i<=j ; i++,j-- )
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"array after reverse \n ";
    display(arr,n);
}