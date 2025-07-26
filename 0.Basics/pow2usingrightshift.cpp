#include<iostream>
using namespace std;
int main()
{	int num=128;
	while((num & 1) == 0 ) //bitwise & gives remainder = 0 when used with even numbers
	{
		num = num>>1;//in every step it reduces the number / 2;
	}
	if(num==1)
		cout << "yes";
}

//
