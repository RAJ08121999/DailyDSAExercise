// {0,2,1,0,1,0,2,0,1}sort all 0s 1s and 2s in ascending order

#include<iostream>
using namespace std;

void input(int arr[],int size);
void display(int arr[],int size);
void logic(int arr[],int size);


int main(){

    int arr[100],size=0;
    cout<<"Enter the size of the array:";
    cin>>size;

    input(arr,size);
    
    logic(arr,size);

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


void logic(int arr[],int size){
    int left=0;
    int right=size-1;
    int i=0;
    while(i<=right){
        if(arr[i]==0){
            swap(arr[i],arr[left]);
            left++;
            i++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[right]);
            right--;
            //no need of index++;
        }
        else{
            i++;
        }
    }
}