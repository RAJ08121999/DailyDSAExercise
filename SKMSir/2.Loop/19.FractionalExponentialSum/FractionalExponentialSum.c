// problem statement - (1/(1^1))+(1/(2^2))+(1/(3^3))+(1/(4^4))+.....+(1/(n^n))

#include<stdio.h>
#include<math.h>

int main(){
    int i = 1 , sum = 0 , n;

    printf("Enter the value of n:");
    scanf("%d",&n);

    while(i<=n){
        printf("(1/(%d^%d))\t + \t",i,i);
        sum+=(1/(pow(i,i)));
        i++;
    }
    printf("\n Sum is %d",sum);
}