#include<stdio.h>
#include<conio.h>
int main(){
    int num1, num2 , num3 , largest;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    printf("Enter third number:");
    scanf("%d",&num3);

    largest=num1;

    if(num2>largest){
        largest=num2;
    }
    if(num3>largest){
        largest=num3;
    }

    printf("largest number is %d:",largest);
}