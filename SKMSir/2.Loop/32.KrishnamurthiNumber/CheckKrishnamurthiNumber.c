// problem statement :- check whether a given number is a krishnamurthi number or not? 145 -> 1! + 4! + 5! = 1+24+120 = 145

#include<stdio.h>

int fact(int num){
    int sum = 1 , i = 1 ;
    while(i<=num){
        sum*=i;
        i++;
    }
    return sum;
}

int main(){
    int num , temp = 0 , lastDigit = 0 , sum = 0 ;

    printf("Enter a number:");
    scanf("%d",&num);

    temp=num;

    while(temp!=0){
        lastDigit = temp%10;
        sum = (sum + fact(lastDigit));
        temp/=10;
    };

    if(sum==num){
        printf("%d is a krishnamurthi number",num);
    }
    else{
        printf("%d is not a krishnamurthi number",num);
    }
}
