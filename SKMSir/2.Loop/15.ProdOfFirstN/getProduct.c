#include<stdio.h>

int main(){
    int num , res=1 , iteration = 1;

    printf("Enter the Nth term :");
    scanf("%d",&num);

    while(iteration<=num){
        res*=iteration;
        printf("%d * ",iteration);
        iteration++;
    }
    
    printf("Result is %d",res);
}