#include<iostream>
using namespace std;

void inputarr(int arr[],int n);
void sort0sand1s(int arr[],int n);
void display(int arr[],int n);
int main()
{
    int arr[100],size;
    cout<<"enter the size of the array";
    cin>>size;
    inputarr(arr ,size);
    sort0sand1s(arr,size);
}

void inputarr(int arr[],int n){
    for(int i = 0; i<n;i++)
    {
        cout<<"enter element at index"<<i<<endl;
        cin>>arr[i];
    }
}
void sort0sand1s(int arr[],int n){
    int i = 0 , j = n-1 ;
    while(i<j){
        if(arr[i]==0)
        {
            cout<<arr[i];
            i++;
        }
        else if(arr[j]==1)
        {
            cout<<arr[j];
            j--;
        }
        else if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    cout<<"the current array is:"<<endl;
    display(arr,n);
    cout<<endl;
}

void display(int arr[],int n){
    cout<<"the sorted array is:";
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i] <<"\t";
    }
    cout<<endl;
}