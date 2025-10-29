#include<stdio.h>
#include<conio.h>
int main(){
    int number,result=0;
    // result will hold 0 if number is odd else 1

    printf("Enter a number");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is an even number",number);
        return result = 1;
    }
    else{
        printf("%d is an odd number",number);
        return result;
    }
}