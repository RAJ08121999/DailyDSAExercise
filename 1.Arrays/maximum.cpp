#include<iostream>
#include<climits>
using namespace std;

void inputarr(int arr[], int n);
int maximum(int arr[], int n);

int main()
{
    int arr[100],size; 

    cout<<"Enter the size of the array:";
    cin>>size;

    inputarr(arr,size);

    int max = maximum(arr,size);
    cout<<"the largest number in the array is "<<max;

}

void inputarr(int arr[], int n){
    for(int i = 0; i<n;i++)
    {
        cout<<"Enter the element for index " <<i <<endl;
        cin>>arr[i];
    }
}

int maximum(int arr[], int n){
    int largest = INT_MIN;
    for(int i = 0 ; i < n ;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;
}