#include<iostream>
using namespace std;

void inputarr(int arr[],int size);
int countZerosOnes(int arr[], int size);
void display(int arr[] , int size);

int main()
{
    int arr[100],size = 0;
    cout<<"Enter the size of the array:";
    cin>>size; 

    inputarr(arr,size);

    display(arr, size);

    int result = countZerosOnes(arr,size);

    cout<<"The total number of Zeros in the array is:" << result << endl;
    cout<<"The total number of Ones in the array is:" << size-result <<endl;

    return 0;
}

void inputarr(int arr[],int size)
{   
    cout<<"Only 0 and 1 should be input value";
    
    for(int i = 0 ; i< size ; i++)
    {
        cout<<"Enter the element at index : " <<i << "\t" << endl; 
        cin>>arr[i];
    }
}

void display(int arr[] , int size){
    cout<<"The current array is:" <<endl ; 
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i] <<"\t";
    }
}

int countZerosOnes(int arr[], int size){
    int count = 0;

    for(int i = 0;i<size ; i++)
    {
        if(arr[i]==0)
        count++;
    }
    return count;
}
