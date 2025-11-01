// problem statement:- check if a given number is a perfect number or not ? divisor's of the number excluding itself if sums to the original number then its a perfect number example 6 => 1+2+3

#include<stdio.h>
int main(){
    int num , sum = 0 , i = 1 ;
    printf("Enter the number:");
    scanf("%d",&num);

    while(i<num){
        if(num%i == 0){
            printf("%d+",i);
            sum+=i;
        }
        i++;
    }
    printf("=%d",sum);

    if(num==sum){
        printf("\n Its a perfect number");
    }
    else{
        printf("Its not a perfect number");
    }
}