#include<iostream>
using namespace std;

void input(int arr[],int size);
int Search(int arr[],int size,int target);

int main(){

    int arr[200],size,target;
    cout<<"Enter the size of the array:\t \n";
    cin>>size;
    cout<<"Enter the target:\t \n";
    cin>>target;

    input(arr,size);
    int index = Search(arr,size,target);

    if(index!=-1)
        cout<<"element found at index"<<"\t"<<index<<endl;
    return 0;
}

void input(int arr[],int size){
    for(int i =0 ; i<size;i++){
        cout<<"Enter the element for index"<<"\t"<<i;
        cin>>arr[i];
    }
}

int Search(int arr[],int size,int target){
    int s=0;
    int e=size-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(mid-1>=0 && arr[mid-1]==target)
        // array out of bound check taki mid+1 kahi array negative (invalid) index me na jaye jo exist hi nahi karta
            return mid-1;

        if(arr[mid]==target)
            return mid;

        if(mid+1 <size && arr[mid+1]==target)
            // array out of bound check taki mid+1 kahi array se bahar na nikal jaye
            return mid+1;
        
        if(arr[mid]>target){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
    }
    return -1;
}