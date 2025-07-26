#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;

    cout<<"Enter the size of the array:";
    cin>>size;

    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter the value for index:  " << i << "\t" ;
        cin>>arr[i];
    }

    cout<<"Doubling each element:";

    for(int i = 0 ; i < size ; i++)
    {
        cout<<2*arr[i] << "\t" ;
    }

    return 0 ;
}