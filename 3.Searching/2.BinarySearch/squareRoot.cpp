#include<iostream>
using namespace std;

int solution(int num);
double morePrecision(int num,int precision,int sol);

int main(){

    int num=0;
    cout<<"Enter the number to get its square root:";
    cin>>num;

    int ans= solution(num);

    cout<<"Answer is "<<morePrecision(num,3,ans);

    return 0;
}

int solution(int num){

    long long int start=0,end=num;
    long long int mid=start+(end-start)/2;
    long long int ans=-1;

    while(start<=end)
    {
        long long int square=mid*mid;

        if(square==num){
            return mid;
            // break;
        }
        else if(square<num){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double morePrecision(int num,int precision,int sol){
    double factor=1;
    double ans=sol;
    for(int i =0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<=num;j+=factor){
            ans=j;
        }
    }
    return ans;
}