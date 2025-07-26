#include <iostream>
using namespace std;

void input(int arr[],int size);
int search(int arr[],int size,int target);

int main(){
    int size=0,target,arr[100];

    cout<<"Enter the size of the array:";
    cin>>size;

    input(arr,size);

    cout<<"Enter the target:";
    cin>>target;

    int ans=search(arr,size,target);
    if (ans==-1)
    {
        cout<<"The element is not in the array";
    }
    else{
        cout<<"The last occurance of the element is found at index"<<"\t"<<ans;
    }
    
}

void input(int arr[],int size){
    for(int i =0;i<size;i++)
    {   
        cout<<"Enter the element at index "<<i <<"\t";
        cin>>arr[i];
    }
}

int search(int arr[],int size,int target){
    int left=0;
    int right=size-1;
    int ans=-1;

    while(left<=right)
    {   
        //mid ko update karo each iteration k bad
        int mid=left+(right-left)/2;

        if(arr[mid]==target){

            //ans store karlo
            ans=mid;
            //right me jao
            left=mid+1;
        }
        else if(target>arr[mid]){
            
            //right me jao
            left=mid+1;
            
        }
        else if(target<arr[mid]){
            //left me jao
            right=mid-1;
        }
    }
    return ans;
}