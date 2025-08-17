#include<iostream>
using namespace std;

void input(int arr[],int size);
void Sort(int arr[],int size);
void display(int arr[],int size);

int main(){
    int arr[200],size;
    cout<<"Enter the size of the array:";
    cin>>size;
    input(arr,size);
    Sort(arr,size);
    display(arr,size);
    return 0;
}

void input(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<"Enter the element for index "<<i <<"\t";
        cin>>arr[i];
    }
}

void Sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void display(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}