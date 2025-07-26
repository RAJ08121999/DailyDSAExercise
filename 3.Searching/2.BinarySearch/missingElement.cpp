#include<iostream>
using namespace std;

void input(int arr[],int size);
int logic(int arr[],int size);

int main(){
    int arr[100],size;

    cout<<"Enter the size of the array";
    cin>>size;

    input(arr,size);
    int ans = logic(arr,size);
    cout<<"the missing element is:"<<"\t"<<ans;
}


void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the element at index"<<i <<"\t";
        cin>>arr[i];
    }
}

int logic(int arr[],int size){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        int diff=arr[m]-m;

        if(diff==1){
            s=m+1;
        }
        else{
            ans=m;
            e=m-1;
        }
    }
    if(ans+1==0)
        return size+1;
    
    return ans+1;
}

//finding the missing element in a sorted array starting from 1
