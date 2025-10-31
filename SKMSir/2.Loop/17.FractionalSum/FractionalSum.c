// Problem statement : 1+(1/2)+(1/3)+......+(1/n)

#include<stdio.h>
#include<conio.h>

int main(){
    int num , sum = 0 , i = 1;
    printf("Enter the Nth Term :");
    scanf("%d",&num);

    while(i<=num){
        printf("(1/%d)+",i);
        sum+=(1/i);
        i++;
    }
    printf("\nSum is:%d",sum);
}