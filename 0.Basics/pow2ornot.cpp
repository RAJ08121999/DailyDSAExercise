#include<iostream>
using namespace std;
int main()
{
	int num = 128, count = 0;
	while(num%2==0)
	{
		num/=2;
		count++;
		cout << num <<endl;
	}
	if(num==1)
		cout << "yes it is 2 to the power"<<count;
	else 
		cout<< "no";
}
