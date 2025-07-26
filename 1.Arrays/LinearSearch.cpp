#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n , key;
    bool flag = false;

    cout<<"Enter the size of the array:";
    cin>>n;

    for(int i = 0 ; i<n; i++)
    {
        cout<<"Enter the element of index : " <<i <<"\t" ;
        cin>>arr[i];
    }

    cout<<"Enter the key to search";
    cin>>key;

    for(int  i = 0 ; i < n ; i++)
    {
        if(key==arr[i])
        {
            cout<<"key found at index:" <<i <<"\n";
            flag=true;
            break;
        }
    }

    if(flag==false)
    cout<<"key not found";

    return 0;
}