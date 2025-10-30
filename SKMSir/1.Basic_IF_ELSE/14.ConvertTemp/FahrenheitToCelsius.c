#include<stdio.h>
#include<conio.h>

int main(){
    int F , C;
    printf("Enter the temperature in F");
    scanf("%d",&F);

    C = (((F-32)*5)/9);
    printf("Equivalent temperature in C is %d:",C);
}