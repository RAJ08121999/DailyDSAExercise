#include<iostream>
#include<climits>
using namespace std;

int small(int smallarr[],int size)
{
	int smallest_number = INT_MAX,index1;
	for(int i = 0 ; i < size ; i++)
	{
		if(smallarr[i]<smallest_number)
		{
			smallest_number=smallarr[i];
			index1=i;
		}
	}
	cout<<endl;
	cout<<"smallest number in the array:"<<smallarr[index1]<<endl;
	cout<<"smallest element is at index:"<<index1 <<endl;
	return index1;
}
int large(int largearr[],int size)
{
	int largest_number = INT_MIN,index2;
	for(int i = 0 ; i < size ; i++)
	{
		if(largearr[i]>largest_number)
		{
			largest_number=largearr[i];
			index2=i;
		}
	}
	cout<<endl;
	cout<<"largest number in the array:"<<largearr[index2]<<endl;
	cout<<"largest element at index:"<<index2<<endl;
	return index2;
}

void swap(int arr[] , int chhota , int bada)
{
	int temp;
	temp = arr[chhota];
	arr[chhota]=arr[bada];
	arr[bada]=temp;
}
int main()
{
	int size,smallest,largest;
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"enter array elements"<<endl;
	for(int i = 0 ; i < size ; i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	cout<<"original array:\n";
	for(int j = 0; j<size;j++)
	{
		cout<<arr[j] << " ";
	}
	cout<<endl;
	
	smallest=small(arr,size);
	
	
	largest=large(arr,size);
	
	
	cout<< "now swapping the smallest and largest elements" <<endl;
	swap(arr,smallest,largest);
	cout<<"updated array: \n";
	for(int k = 0; k<size; k++)
	{
		cout<< " " <<arr[k];
	}
	cout<< " " <<endl;
	
	return 0;
}
