#include<stdio.h>
int main(){
    int num , sum = 0 , i = 1;
    printf("Enter the Nth Term:");
    scanf("%d",&num);

    while(i<=num){
        printf("%d +",i);
        sum+=i;
        i++;
    }
    printf("\n sum is = %d",sum);
}