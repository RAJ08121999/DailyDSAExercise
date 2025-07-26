#include<iostream>
using namespace std;

void inputarr(int arr[],int size);
int findunique(int arr[],int size);

int main(){
    int arr[100],size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    inputarr(arr,size);
    int unique = findunique(arr,size);
    cout<<"The unique element in the array is " <<unique <<endl;
}

void inputarr(int arr[],int size){
    for(int i = 0; i<size;i++)
    {
        cout<< " enter element for index:" <<i <<"\t";
        cin>>arr[i];
    }
}

int findunique(int arr[],int size){
    int element = 0;
    for(int i = 0; i< size; i++){
        element = element ^ arr[i];
    }
    return element;
}