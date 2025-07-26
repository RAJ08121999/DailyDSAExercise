#include<iostream>
using namespace std;
int OnesC(int num)
{
	int flipped=~(num);
	flipped+=1;
	return flipped;
}
int decToBin(int dec)
{
	int ans = 0, power=1;
	while(dec>0)
	{
		int rem = dec%2;
		dec/=2;
		ans+= (rem*power);
		power*=10;
	}
	OnesC(ans);
}
int main()
{
	int num , ans=0;
	cout<<"enter a number";
	cin>> num;
	ans = decToBin(num);
	cout << "the result is :" << ans;
	return 0;
}

//its a wrong code

