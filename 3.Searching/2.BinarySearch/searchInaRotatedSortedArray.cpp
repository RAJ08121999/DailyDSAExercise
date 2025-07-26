#include<iostream>
using namespace std;

void input(int arr[],int size);
int pivot(int arr[],int size);
int binarySearch(int arr[],int size,int target);

int findPosition(int arr[],int size,int target);

int main(){
    int arr[100],size,target;

    cout<<"Enter the size of the array:";
    cin>>size;

    input(arr,size);

    cout<<"Enter the target to search:";
    cin>>target;

    int ans=findPosition(arr,size,target);

    

    // binarySearch(arr,size,target);
    if(ans!=-1)
    {
        cout<<"The element is found in the array at index:\t"<<ans;
    }
    else{
        cout<<"Target not found in the array";
    }
    

    return 0;
}

void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the element for index number "<<i<<"\t";
        cin>>arr[i];
    }
}

int pivot(int arr[],int size){
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
    return mid;
}


int binarySearch(int arr[],int left,int right,int target){

    // int left=0,right=size-1,
    // int mid=(left+right)/2;

    for(int  i = 0; left<=right; i++)
    {   
        int mid=(left+right)/2;

        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {   
            left=mid+1;
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }

        
    }

    return -1;
}


int findPosition(int arr[],int size,int target){
    int pivotElement=pivot(arr,size);

    if(target>arr[pivotElement]&& target <= arr[size-1]){
        //binary search on 2nd line
        return binarySearch(arr,pivotElement,size-1,target);
    }
    else{
        //binary search on 1st line
        return binarySearch(arr,0,pivotElement-1,target);
    }
}
