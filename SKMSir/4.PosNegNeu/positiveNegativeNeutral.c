#include<stdio.h>
#include<conio.h>
int main(){
    int number,result=0;
    // result will hold 1 if number is positive , -1 if negative and 0 if neutral;
    
    printf("Enter a number");
    scanf("%d",&number);

    if(number>0){
        printf("positive number");
        return result = 1;
    }
    else if(number<0){
        printf("negative number");
        return result = -1;
    }
    else{
        printf("neutral number 0");
        return result;
    }
}