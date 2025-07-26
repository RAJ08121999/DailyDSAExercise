#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> nums={2,2,1,1,1,2,2};
	int n = nums.size();
	
	//pre-defined sorting
	sort(nums.begin(),nums.end());
	
	//frequency cout;
	int freq = 1, ans = nums[0];
	for(int i = 1;i<n;i++)
	{
		if(nums[i]==nums[i-1])
		{
			freq++;
		}
		else{
			freq=1;
			ans=nums[i];
		}
		if(freq>n/2)
		{
			cout<<"majority element is :" <<ans <<endl;
			break;
		}
	}
	return 0;
}
