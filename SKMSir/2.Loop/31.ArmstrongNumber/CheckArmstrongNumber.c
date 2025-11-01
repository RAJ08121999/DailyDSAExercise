// problem statement :- check whether a given number is an armstrong number or not ? An Armstrong number (also called a narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. example 153 -> 1^3 + 5^3 + 3^3 = 153

#include<stdio.h>
#include<math.h>

int getDigit(int num){
    int count = 0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}

int Power(int a , int b){
    int res = 1 , i = 1;

    while(i<=b){
        res*=a;
        i++;
    }
    return res;
}
int main(){
    int num , lastdigit = 0 , sum = 0 , temp = 0;
    printf("Enter a number:");
    scanf("%d",&num);

    temp = num;

    while(num>0){
        lastdigit = num%10;
        sum = sum+Power(lastdigit,getDigit(temp));
        num/=10;
    }

    if(temp==sum){
        printf("%d is an armstrong number",temp);
    }
    else{
        printf("%d is not an armstrong number",temp);
    }
}