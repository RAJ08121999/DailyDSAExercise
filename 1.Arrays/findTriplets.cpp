#include<iostream>
using namespace std;

void inputarr(int arr[],int size);
void allTriplets(int arr[],int size);
void display(int arr[],int size);

int main(){
    int arr[100],size;
    cout<<"Enter the size of the array:";
    cin>>size;
    inputarr(arr,size);
    display(arr,size);
    allTriplets(arr,size);
}

void inputarr(int arr[],int size){
    for(int i = 0; i<size; i++)
    {
        cout<<"enter the element of index"<<i <<"\t";
        cin>>arr[i];
    }
}

void display(int arr[],int size){
    cout<<"the current array is:"<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i] <<"\t" ;
    }
    cout<<endl;
}

void allTriplets(int arr[],int size)
{
    for(int i = 0 ; i<size; i++)
    {
        for(int j=0;j<size;j++)
        {
            for(int k = i ;k<size;k++)
            {
                cout<<arr[i] <<"\t" <<arr[j] <<"\t" <<arr[k] <<endl;
            }
        }
    }
}