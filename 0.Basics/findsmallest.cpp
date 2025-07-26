#include<iostream>
#include<climits>
using namespace std;

int findsmallest(int b[],int size)
{	int smallest=INT_MAX;//it has the value of +infinity  INT_MAX is defined in climits

	for(int i =0; i<size ; i++)
	{
		if(b[i]<smallest)
		{
			smallest=b[i];//we can also use min and max function
		}
	}
	return smallest;
}
int main()
{
	int a[10],ans;
	cout << "Enter 10 elements for the array";
	for(int i =0; i<10;i++)
	{
		cin>>a[i];
	};
	ans=findsmallest(a , 10);

	cout<<"smallest number is:" <<ans;
	return 0;
	
}
