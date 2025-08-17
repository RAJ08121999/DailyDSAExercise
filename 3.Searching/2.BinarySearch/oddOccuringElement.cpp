#include <iostream>
using namespace std;

void input(int arr[],int size);
int Search(int arr[],int size);

int main(){
    int arr[200],size;
    cout<<"Enter the size of the array";
    cin>>size;
    input(arr,size);
    int ans=Search(arr,size);
    if(ans!=1){
        cout<<"Odd occuring found at index \t"<<ans;
    }
    else{
        cout<<"NO odd occuring element found";
    }
    return 0; 
}

void input(int arr[],int size){
    for(int i =0;i<size-1;i++){
        cout<<"Enter the element for index number \t"<< "\t"<<i;
        cin>>arr[i];
    }
}

int Search(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;

        // single element handle
        if(s==e)
            return s;
        
        // check if mid is odd or even
        if(mid&1){
            // if mid&1 returns true then it is an odd number
            if(mid-1>=0 && arr[mid-1]==arr[mid]){
                // right me jao
                s=mid+1;
            }
            else{
                //left me jao
                e=mid-1;
            }
        }
        else{
            // when mid is even 
            if(mid+1<size && arr[mid]==arr[mid+1]){
                //right me jao
                s=mid+2;
            }
            else{
                //ya to main right part par hu ya ans k upar hu isiliye e=mid kar raha hu kyuki e=mid-1 karne se ans lost ho sakta hai

                e=mid;
            }
        }
    }
    return -1;
}