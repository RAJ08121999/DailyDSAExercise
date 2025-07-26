#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> my_vec;//created a vector of size 0;
	vector<int> my_vec2={1,23,5,43};//created a vector of size 4
	vector<int> my_vec3(5,0);//created a vector of size 5 and each inidices will have value 0;
	
	for(int val : my_vec2)//it is a for each loop 
	{
		cout<<"elements is this vector:"<<val << endl;
	}
	cout<<"pushed 36" <<endl ;
	my_vec2.push_back(36);//this function adds an element in the end of the vector
	for(int val : my_vec2)//it is a for each loop 
	{
		cout<<"elements in this vector:"<<val << endl;
	}
	
	cout<<"popped 36 " <<endl ;
	my_vec2.pop_back();//it deletes the last index's value;
	for(int val : my_vec2)//it is a for each loop 
	{
		cout<<"elements in this vector:"<<val << endl;
	}
	
	cout <<"the first value of the vector"<<my_vec2.front() <<endl;//it shows the front value of the vector;
	cout <<"the last value of the vector"<<my_vec2.back() <<endl ;// it shows the last value of the vector;
	cout <<"the value at index 2 is" << my_vec2.at(2) <<endl ;// this returns the value of the specific index
	cout<< "size of the vector="<<my_vec2.size();
	return 0;
	
}
