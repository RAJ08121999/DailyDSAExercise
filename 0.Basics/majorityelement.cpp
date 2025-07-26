 #include<iostream>
 using namespace std;
 int main()
 {
 	int arr[]={1,2,2,1,1};
 	int size=sizeof(arr)/sizeof(arr[0]);
 	for(int val=0;val<size;val++)
 	{
 		int count=0;
 		for(int ele = 0;ele<size;ele++)
 		{
 			if(arr[ele]==arr[val])
 			{
				count++;
			}
		}
		if(count>size/2)
		{
			cout<<"majority element is:"<<arr[val];
			break;
		}
	}
	
 }
