#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2,res=0;
    // res will hold 1 if num1>num2 , -1 if num2>num1 and 0 if num1==num2;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d is greater than %d",num1,num2);
        return res = 1;
    }
    else if(num2>num1){
        printf("%d is greater than %d",num2,num1);
        return res = -1;
    }
    else{
        printf("%d and %d are equal",num1,num2);
        return res = 0;
    }
}