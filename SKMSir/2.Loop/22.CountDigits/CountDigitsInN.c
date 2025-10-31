// problem statement -> count digits in any given integer N ; 12345->5

#include<stdio.h>
int main(){
    int num , count = 0 , temp ;
    printf("Enter a number");
    scanf("%d",&num);

    temp = num;
    while(temp!=0){
        temp/=10;
        count++;
    }
    printf("total digits in %d is %d",num , count);
}