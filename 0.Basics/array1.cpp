#include<iostream>
using namespace std;

int main()
{
    int arr[10];

    for(int i =0; i<10;i++)
    {
        cout<<"enter data at index :" << i <<endl;
        cin>> arr[i];
    }

    cout<<"doubling the value at each index:";

    for(int i =0 ; i<10;i++)
    {
        cout << 2* arr[i] << endl;
    }
    return 0;
}