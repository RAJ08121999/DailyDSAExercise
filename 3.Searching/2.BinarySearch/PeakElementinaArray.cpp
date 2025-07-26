#include<iostream>
using namespace std;

void input(int arr[],int size);
int logic(int arr[],int size);

int main(){
    int arr[100],size;

    cout<<"Enter the size of the array:";
    cin>>size;

    input(arr,size);

    int ans =logic(arr,size);
    cout<<"The Peak element is \t"<<ans;

}

void input(int arr[],int size){
    for(int i =0;i<size;i++)
    {
        cout<<"Enter the element for index "<<i<<"\t";

        cin>>arr[i];
    }
}


int logic(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){

        if(arr[mid]<arr[mid+1]){
            //we are at first half so the peak will be in the next half
            s=mid+1;
        }
        else{
            //either we are at peak or in its half
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[mid];
    // last me sirf single item bachega jiske upar s mid and e tino point kar raha hoga to koi v pointer return karo does not matter
}


//find the peak element in a sorted array
//peak element in a mountain array problem