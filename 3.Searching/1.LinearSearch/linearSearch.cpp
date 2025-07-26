#include <iostream>
using namespace std;

void input(int arr[],int size);
bool search(int arr[],int size,int target);

int main()
{
    int arr[100],size,target;

    cout<<"enter the size of the array:";
    cin>>size;

    input(arr,size);

    cout<<"enter the key to search:";
    cin>>target;

    int yes=search(arr,size,target);

    if(yes!=1)
    {
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"target found" <<endl;
    }

}


void input(int arr[],int size){
    for(int i = 0 ; i<size;i++)
    {
        cout<<"Enter array element for index"<<"\t"<<i <<"\t";
        cin>>arr[i];
    }
    cout<<endl;
}


bool search(int arr[],int size,int target){
    for(int i = 0 ; i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}
