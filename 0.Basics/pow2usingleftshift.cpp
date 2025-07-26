#include<iostream>
using namespace std;
int main()
{
	int num=128;
	for(int i=0 ; (1<<i)<=num; i++)
	{
		if((1<<i)==num)
		{
			cout<<"yess";
		}
	}
	cout<< "no";
	return 0;
}
