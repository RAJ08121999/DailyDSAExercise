// problem statement -> get the highest digit in any given integer ; 234934 -> 9

#include<stdio.h>

int main(){
    int num , max = 0 , lastDigit , temp;
    printf("Enter the integer ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0){
        lastDigit = (temp%10);
        if(lastDigit>max){
            max=lastDigit;
        }
        temp/=10;
    }
    printf("Greatest digit in %d is %d",num , max);
}