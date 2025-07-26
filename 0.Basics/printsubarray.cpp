#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter the size of the array";
	cin>>size;
	int arr[size];
	cout<<"enter array elements:";
	for(int i = 0 ; i < size ; i++)
	{
		cin>>arr[i];
	}
	int start , end ;
	for(start = 0 ; start < size ; start++)
	{
		for(end = start ; end < size ; end++)
		{
			for(int i = start ; i<=end;i++){
				cout<<arr[i];
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
