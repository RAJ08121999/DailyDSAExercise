#include<iostream>
using namespace std;

int main()
{   
    int arr[100];
    int size , sum = 0;

    cout << "Enter the size of the array:";
    cin>> size;

    for(int i = 0 ; i<size ; i++)
    {
        cout<<"Enter element for index " <<i <<"\t" ;
        cin>>arr[i];
    }

    for(int  i = 0 ; i < size ; i++ )
    {
        sum+=arr[i];
    }

    cout<<"The sum of the array elements is:"<<sum;

    return 0 ;
}