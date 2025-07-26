#include<iostream>
using namespace std;

void inputarr(int arr[],int n);
void shift1element(int arr[],int n);
void display(int arr[],int n);


int main()
{
    int arr[100],size;
    cout<<"enter the size of the array";
    cin>>size;
    inputarr(arr ,size);
    shift1element(arr,size);
    return 0;
}

void inputarr(int arr[],int n){
    for(int i = 0; i<n;i++)
    {
        cout<<"enter element at index"<<i<<endl;
        cin>>arr[i];
    }
}
void shift1element(int arr[],int n){
    int temp=arr[n-1];

    for(int i = n-1; i>=1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    display(arr,n);
}
void display(int arr[],int n){
    cout<<"the shifted array is:";
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i] <<"\t";
    }
    cout<<endl; 
}