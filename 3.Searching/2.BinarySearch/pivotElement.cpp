#include<iostream>
using namespace std;

void input(int arr[],int size);
int logic(int arr[],int size);

int main(){
    int arr[100],size;

    cout<<"Enter the size of the array:";
    cin>>size;

    input(arr,size);

    int ans=logic(arr,size);

    cout<<"The Pivot element in the array is:\t"<<ans;

    return 0;
}

void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the element for index number "<<i<<"\t";
        cin>>arr[i];
    }
}

int logic(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        int mid=s+(e-s)/2;

        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return arr[mid];
}