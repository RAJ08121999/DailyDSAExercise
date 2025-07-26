#include<iostream>
#include<climits>
using namespace std;

int findlargest(int arr[],int size)
{	
	int i, index , largest = INT_MIN;

	for(i = 0 ; i < size ; i++ )
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
			index=i;
		}
	}
	cout<<"largest value at index" <<index <<endl ;
	
	return largest;
}
int main()
{
	int size , ans;
	cout<<"enter the size of the array";
	cin >> size;
	int a[size];
	cout<<"enter array elements:";
	for(int i = 0 ; i < size ; i++ )
	{
		cin>>a[i];
	}
	ans = findlargest(a , size);
	cout<<"the largest number is: " <<ans;
	return 0;
}
