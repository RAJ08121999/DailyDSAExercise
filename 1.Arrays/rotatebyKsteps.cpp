//rotate an array with k steps

#include<iostream>
using namespace std;

void input(int arr[],int size);
void display(int arr[],int size);
void logic(int arr[],int size,int steps);


int main(){

    int arr[100],size=0,steps=0;
    cout<<"Enter the size of the array:";
    cin>>size;
    cout<<"Enter the steps:";
    cin>>steps;

    input(arr,size);
    
    logic(arr,size,steps);

    display(arr,size); 

    return 0;
}

void input(int arr[],int size){
    for(int i =0; i<size;i++){
        cout<<"Enter the element at index"<<i <<"\t";
        cin>>arr[i];
    }
}

void display(int arr[],int size){
    for(int i =0; i<size;i++){
        cout<<arr[i]<<"\t";
    }
}


void logic(int arr[],int size,int steps){
    int newarr[size];

    for(int i =0;i<size;i++){
        int newIndex=(i+steps)%size;
        newarr[newIndex]=arr[i];
    }
    //copying the new arr into previous one
    for (int i = 0; i < size; i++) {
        arr[i] = newarr[i];
    }
}