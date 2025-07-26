#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int size = sizeof(arr) / sizeof(arr[0]);
	int start = 0;
	int end = size-1;
	
	for(start,end;start<=end;start++,end--)
	{	
		int temp = arr[start];
		arr[start]=arr[end];
		arr[end]= temp;
	}
	
	cout<<"the reversed array is :";
	for(int i = 0 ;i<size;i++)
	{
		cout<<arr[i] <<endl ;
	}
	 
	cout << endl;
	return 0;
}
