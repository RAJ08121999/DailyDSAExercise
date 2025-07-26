#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter the size of the array:";
	cin>>size;
	
	int arr[size];
	cout<<"enter array elements:";
	for(int i=0; i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(int start = 0 ; start<size ; start++)
	{
		int cursum = 0;	
		
		for(int end = start ; end < size ; end ++)
		{	
			cursum+=arr[end];
			for(int i = start ;i <= end ; i++)
			{
				cout<<arr[i] << " ";
				
			}
			cout<<"=> Sum = "<<cursum <<endl;
		}
	}
	return 0;
}
