#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vec = {2,7,11,15};
	int target=18;
	int start = 0;
	int end = vec.size() -1;
	
	while(start<end)
	{
		int pairSum=vec[start]+vec[end];
		if(pairSum==target)
		{
			cout<<"ans="<<start <<"and"<<end <<endl;
			break;
		}
		else if(pairSum<target)
		{
			start++;
		}
		else
			end--;
	}
	return 0;
}
