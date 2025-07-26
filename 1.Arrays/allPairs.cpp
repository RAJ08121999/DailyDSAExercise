#include<iostream>
using namespace std;

void inputarr(int arr[],int size);
void allPairs(int arr[],int size);
void display(int arr[],int size);

int main(){
    int arr[100],size;
    cout<<"Enter the size of the array:";
    cin>>size;
    inputarr(arr,size);
    display(arr,size);
    allPairs(arr,size);
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

void allPairs(int arr[],int size){
    cout<<"the pairs are:"<<endl;
    for(int i =0; i<size; i++)
    {
        for(int j = i; j<size;j++)
        {
            cout<<arr[i] <<"\t" << arr[j] <<endl;
        }
    }
}