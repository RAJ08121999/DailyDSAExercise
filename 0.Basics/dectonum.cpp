#include<iostream>
using namespace std;

int dectobinum(int dec)
{
	int ans = 0, pow=1;
	
	while(dec>0)
	{
		int rem = dec%2;
		dec/=2;
		ans+=(rem*pow);
		pow*=10;
	}
	return ans;
}
int main()
{
	int num, ans=0;
//	cout << "enter a number";
//	cin >> num;
	for(int i=1;i<=10;i++)
	{
		ans = dectobinum(i);
		cout << "the ans is :" << ans <<endl;
	}
	
	return 0;
}
