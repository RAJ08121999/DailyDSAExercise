#include<iostream>
using namespace std;

int firstOccurance(int arr[],int size,int target);
int lastOccurance(int arr[],int size,int target);

void input(int arr[],int size);
int main(){

    int arr[100],size,target;
    cout<<"Enter the size of the array:";
    cin>>size;

    input(arr,size);

    cout<<"Enter the target:";
    cin>>target;

    int f = firstOccurance(arr,size,target);

    int l = lastOccurance(arr,size,target);

    int totalOccurance=(l-f)+1;

    cout<<"This element is occured total of "<<totalOccurance <<"\t " <<"times";
    return 0;
}

void input(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<"Enter the element at index "<<i <<"\t";
        cin>>arr[i];
    }
}


int firstOccurance(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    
    int ans =-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans =mid;
            //left me jao
            e=mid-1;
        }
        else if(target>arr[mid]){

            //right me jao
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
    }
    return ans;
}

int lastOccurance(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int ans =-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans =mid;
            //right me jao
            s=mid+1;
        }
        else if(target>arr[mid]){

            //right me jao
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
    }
    return ans;
}