#include<iostream>
using namespace std;

void inputarr(int arr[],int n);
void display(int arr[],int n);
void extreamprint(int arr[],int n);

int main()
{
    int arr[100],size;
    cout<<"enter the size of the array";
    cin>>size;

    inputarr(arr,size);
    cout<<"the current array is:" <<endl;
    display(arr,size);
    extreamprint(arr,size);
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
        cout<<arr[i] <<"\t";
    }
}

void extreamprint(int arr[],int n)
{
    int left = 0;
    int right = n-1;

    while(left<=right)
    {   
        if(left==right)
        {
            cout<<arr[left] <<"\t";   
        }
        else{
            cout<<arr[left] <<"\t";
            cout<<arr[right] <<"\t";
        }
        left++;
        right--;
    }
}