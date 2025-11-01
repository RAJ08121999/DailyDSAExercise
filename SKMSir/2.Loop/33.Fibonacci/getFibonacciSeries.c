#include<stdio.h>
int main(){
    int num , i = 0 , f0 = 0 , f1 = 1 , f2 = 0;
    printf("Enter the Nth term:");
    scanf("%d",&num);

    // printf("%d",f0);
    // printf("%d",f1);

    while(i<num){
        f2=f0+f1;
        printf("%d \t",f0);
        f0=f1;
        f1=f2;
        i++;
    }
}