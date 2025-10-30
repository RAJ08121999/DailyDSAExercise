#include<stdio.h>
#include<conio.h>
int main(){
    int num,res=0;
    // res will hold 1 if num  is divisible by 3 or 5 otherwise res will hold 0;

    printf("Enter a number");
    scanf("%d",&num);

    if(num%3==0){
        printf("divisible by 3 ");
        return res = 1;
    }
    if(num%5==0){
        printf("divisible by 5 ");
        return res = 1;
    }
    printf("Not divisible by 3 or 5");
    return res;
}