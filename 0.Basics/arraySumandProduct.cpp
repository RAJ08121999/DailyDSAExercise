#include<iostream>
using namespace std;

int arrSum(int array[],int size)
{	int ans=0;
	for(int i =0 ;i<size ; i++)
	{
		ans+=array[i];
	}
	return ans;
}
int arrProd(int array[],int size)
{	int ans=1;
	for(int i =0 ;i<size ; i++)
	{
		ans*=array[i];
	}
	return ans;
}
int main()
{
	int size,sum=0,prod=1;
	cout<<" enter the size of the array";
	cin>>size;
	int arr[size];
	cout<<"enter the elements of the array:";
	for(int i =0 ; i<size;i++)
	{
		cin>>arr[i];
	}
	
	sum=arrSum(arr,size);
	cout<<"the sum of all elements of the array is:" <<sum << endl;
	prod=arrProd(arr,size);
	cout<<"the product of all elements of the array is:" <<prod << endl;
	
	return 0;
	
}
