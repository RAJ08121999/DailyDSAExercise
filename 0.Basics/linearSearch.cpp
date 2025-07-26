#include<iostream>
using namespace std;
int main()
{	
	int size;
	cout<<"enter the size of the array";
	cin>> size;
	int arr[size];
	cout << "enter array elements:";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	};
	int key;
	cout<<"enter the key to be searched:";
	cin>>key;
	
	for(int i = 0 ; i<size; i++)
	{
		if(arr[i]==key)
		{
			cout<<"key is present at index:" <<i;
		}
		else
			cout<<"key is not present in the array";
	}
	
}
