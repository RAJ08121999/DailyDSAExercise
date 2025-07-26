#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter array size:";
	cin>>size;
	int arr[size];
	cout<<"enter the elements of array:\n";
	for(int i =0; i<size;i++)
	{
		cin>>arr[i];
	}
	
	int target=0;
	cout<<"enter the target:";
	cin>>target;
	
	for(int i =0; i<size; i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				cout<<i<<"and"<<j <<endl;
			}	
		}
	}
	return 0;
	
}
