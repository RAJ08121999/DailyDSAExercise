// problem statement :- check a given number is palindrome or not

#include<stdio.h>
int main(){
    int num , i = 2 , status = 0;
    // status will hold 0 if not a prime number and 1 if given integer is a prime number;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num==2 || num == 3 ){
        printf("Its a prime number");
            return status=1;
    }

    while(i*i<=num){
        if(num%i==0){
            printf("Its not a prime number");
            return status;
        }
        else{
            printf("Its a prime number");
            return status=1;
        }
        i++;
    }
}