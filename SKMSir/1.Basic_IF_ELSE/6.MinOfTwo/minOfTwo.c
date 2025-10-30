#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2,res=0;
    // num1 and num2 > 0 ;
    // res will hold 1 if num1 is smaller and 0 if num2 is greater;

    printf("Enter first number");
    scanf("%d",&num1);
    
    printf("Enter second number");
    scanf("%d",&num2);

    if(num1<num2){
        printf("%d is smaller than %d",num1,num2);
        return res = 1 ;
    }
    else{
        printf("%d is smaller than %d",num2,num1);
        return res = 0 ;
    }
}