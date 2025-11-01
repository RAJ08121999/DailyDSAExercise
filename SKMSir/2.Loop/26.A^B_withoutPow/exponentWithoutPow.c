// problem statement -> find a^b without using pow function

#include<stdio.h>
int main(){
    int a , b , res = 1 , i = 1;

    printf("Enter the value of A:");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    printf("%d ^ %d = \n",a,b); 

    while(i<=b){
        printf(" %d x ",a);
        res*=a;
        i++;
    }

    printf("\n the result is %d:",res);
    

}