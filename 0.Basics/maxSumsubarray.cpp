#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int size , maxSum=INT_MIN ;
	cout<<"enter the size of the array";
	cin>>size;
	
	int arr[size];
	cout<<"enter array elements:";
	
	for(int i =0 ; i<size;i++)
	{
		cin>>arr[i];
	}
	for(int st = 0 ; st<size; st++)
	{
		int curSum=0;
		for(int end = st; end<size ; end++)
		{
			curSum+=arr[end];
			maxSum=max(curSum,maxSum);
		}
	}
	cout<<"the maxSum of Sub Array is :"<<maxSum;
}
