#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int size = 7;
	int arr[7] = {3,-4,5,4,-1,7,-8};
	int currSum = 0 , maxSum = INT_MIN;
	
	for(int i = 0; i<size ; i++)
	{
		currSum+=arr[i];
		maxSum = max(currSum,maxSum);
		
		if(currSum<0)
		{
			currSum=0;
		}
	}
	cout<<"max Sub array sum is:"<<maxSum;
}
