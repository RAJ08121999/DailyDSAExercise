#include<iostream>
using namespace std;


void input(int arr[],int size);
void logic(int arr[],int size);
// void display(int arr[],int size);


int main(){
    int size=0;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    input(arr,size);
    logic(arr,size);
    // display(arr,size);
    return 0;
}

void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the element of index: "<<i<<"\t";
        cin>>arr[i];
    }
}

// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         // cout<<"Enter the element of index: "<<i<<"\t";
//         cout<<arr[i];
//     }
// }

void logic(int arr[],int size){
    int sum=0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    int totalSum=((size)*(size+1))/2;//(n*n+1)/2

    int ans=totalSum-sum;
    cout<<"the missing number is :"<<ans;
}