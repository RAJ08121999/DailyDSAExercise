#include<stdio.h>
#include<conio.h>

int main(){
    int year , res = 0;
    // res will hold 1 if the given year is a leap year otherwise 0;

    printf("Enter the year:");
    scanf("%d",&year);

    // if its a century year
    if(year%100 == 0){

        if(year%400==0){
            res = 1;
            printf("Its a leap year status:%d",res);
        }
        else{
            printf("Its not a leap year status:%d",res);
        }
    }

    if(year%4==0){
        if(year%100!=0){
            res = 1;
            printf("Its a leap year status:%d",res);
        }   
    }
    else{
        printf("Its not a leap year status:%d",res);
    }
}