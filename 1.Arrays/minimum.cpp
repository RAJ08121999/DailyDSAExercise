#include<iostream>
#include<climits>
using namespace std;


void inputarr(int arr[],int size);
int min(int arr[],int size);

int main()
{
    int arr[100],size;
    cout<<"Enter the size of the array:";
    cin>>size;

    inputarr(arr,size);

    int minimum=min(arr,size);
    cout<<"the minimum number in this array is :" <<minimum <<"\t";
    return 0;
}

void inputarr(int arr[],int size){
    for(int i =0 ;i< size; i++)
    {
        cout<<"Enter the element at index :" <<i <<endl;
        cin>>arr[i];
    }
}

int min(int arr[],int size){
    int smallest= INT_MAX;

    for(int i =0 ; i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    return smallest;

}