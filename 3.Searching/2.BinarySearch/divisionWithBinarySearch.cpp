#include <iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int start=0;
    int end=dividend;
    int mid= start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        int mid= start+(end-start)/2;
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor<dividend){
            //store the ans
            ans=mid;

            //go to right
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){

    int divisor;
    int dividend;
    cout<<"Enter the divisor";
    cin>>divisor;

    cout<<"Enter the dividend";
    cin>>dividend;

    if(divisor==0){
        cout<<"undefined";
    }

    int ans=getQuotient(abs(divisor),abs(dividend));

    // ab sign decide kar lete hai

    if((divisor>0 && dividend <0 )||(divisor<0 && dividend >0)){
        ans=0-ans;
    }

    //ab 0 ka case handle kar lete hai

    if(dividend==0){
        ans=0;
    }


    cout<<"The Qoutient is :"<<ans<<endl;


    return 0;
}