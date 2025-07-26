#include<iostream>
using namespace std;

int main()
{
    int array[100]; // array creation with capacity 100;
    int elements = 0 ;

    cout<<"enter the size of the array : \n";
    cin>>elements;//took the number of elements

    for(int i = 0 ; i<elements; i++)
    {   
        cout<<"enter value for index:"<<i << endl;
        cin>>array[i]; //taking input into the array;
    }

    // displaying the array

    for(int i = 0 ; i < elements ; i++)
    {
        cout<<array[i] << endl ;
    }
}