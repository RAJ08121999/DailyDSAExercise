#include<iostream>
using namespace std;

void input(int arr[100],int size);
void sort(int arr[100],int size);

int main(){
    int arr[100],size;
    cout<<"enter the size of the array:";
    cin>>size;
    input(arr,size);
    sort(arr,size);
    cout<<"the sorted array is ";
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i] << "\t";
    }

    return 0;
}

void input(int arr[100],int size){
    for(int i = 0 ; i<size;i++)
    {
        cout<<"enter the elements for the array at index"<<i <<endl;
        cin>>arr[i];
    }
}

void sort(int arr[100],int size){
    int neg=0;
    int index=0;
    for(index;index<size;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index],arr[neg]);
            neg++;
        }
    }
}