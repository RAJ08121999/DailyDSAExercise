// problem statement :- check if a given integer is palindrome or not ; a palindrome number is what which is identical if read from left or right

#include<stdio.h>

int rev(int num){
    int lastdigit = 0 ,rev = 0;
    while(num!=0){
        lastdigit=num%10;
        rev=rev*10+lastdigit;
        num/=10;
    }
    return rev;
}
int main(){
    int num ;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num == rev(num)){
        printf("Yes this is a palindrome number");
    }
    else{
        printf("Its not a palindrome number");
    }
}