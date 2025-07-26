#include<iostream>
using namespace std;

void input(int arr[],int size);
bool search(int arr[],int size,int key);

int main()
{   
    int arr[100],size,target;

    cout<<"Enter the size of the array";
    cin>>size;

    input(arr,size);

    cout<<"Enter the key to search";
    cin>>target;

    int yes = search(arr,size,target);

    if(yes!=0){
        cout<<"Target found";
    }
    else{
        cout<<"Target not found";
    }

    return 0;
}


void input(int arr[],int size){
    for(int i = 0 ; i<size;i++)
    {
        cout<<"Enter array element for index"<<"\t"<<i <<"\t";
        cin>>arr[i];
    }
    cout<<endl;
}

bool search(int arr[],int size,int key){

    int left=0,right=size-1,mid=(left+right)/2;

    for(int  i = 0; left<=right; i++)
    {
        if(arr[mid]==key)
        {
            return true;
        }
        else if(arr[mid]<key)
        {   
            left=mid+1;
        }
        else if(arr[mid]>key)
        {
            right=mid-1;
        }

        mid=(left+right)/2;
    }

    return false;
}