#include<stdio.h>
#include<conio.h>
int main(){
    int num , res = 0 ;
    // res will hold 1 if num is divisble by both 3 and 5 , if not then res = 0;
    printf("Enter a number");
    scanf("%d",&num);

    if( num % 3 == 0){
        if( num % 5 == 0){
            res = 1;
            printf("divisble %d",res);
        }
    }
    else{
        printf("Not divisble %d",res);
        return res;
    }
}