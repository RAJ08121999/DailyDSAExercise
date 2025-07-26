#include<iostream>
using namespace std;

int binToDec(int bin)
{
	int power=1,ans=0;
	while(bin>0)
	{
		int rem =bin%10;//opertation
		ans+=rem*power;
		
		bin/=10; //updation
		power*=2;
	}
	return ans;
}
int main()
{
	int binary,ans=0;
	cout << "enter a number:\n";
	cin >> binary;
	ans = binToDec(binary);
	cout << "the ans is:" << ans ;
	return 0;
}
