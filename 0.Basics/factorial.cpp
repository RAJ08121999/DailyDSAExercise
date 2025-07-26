#include<iostream>
using namespace std;
int fact(int n){
	int factorial =1;
	int i;
	for(i=1; i<=n ; i++)
	{
		factorial *= i;
	}
	return factorial;
}
int main(){
	int n;
	cout << "Enter a number";
	cin >> n;
	cout << fact(n);
	return 0;
}

