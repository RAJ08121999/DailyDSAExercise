// problem statement -> find the product of a * b  without using multiplication;

#include<stdio.h>
int main(){
    int num1,num2 , res = 0 , i = 1;

    printf("Enter the value of A:");
    scanf("%d",&num1);

    printf("Enter the value of B:");
    scanf("%d",&num2);

    while(i<=num2){
        printf("%d+",num1);
        res+=num1;
        i++;
    }
    printf("\n Product of %d X %d  is:%d",num1, num2, res);
}