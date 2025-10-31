// problem statement -> Reverse a given integer ; 12345->54321

#include<stdio.h>
#include<math.h>

int main(){
    int num , rev = 0 , temp , lastDigit = 0 ;
    printf("Enter the number :");
    scanf("%d",&num);

    temp=num;
    while(temp!=0){
        lastDigit = (temp%10);
        rev=((rev*10)+lastDigit);
        temp/=10;
    }
    printf("Reverse of %d is %d",num , rev);
}