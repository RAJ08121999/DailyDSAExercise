// problem statement - 1 + (1/x) + (1/x*x) + (1/x*x*x)+......+(1/x*x*x....n)

#include<stdio.h>
#include<math.h>

int main(){
    int n , x , sum = 1, i = 1 ;

    printf("Enter the nth term:");
    scanf("%d",&n);

    printf("Enter the value of x:");
    scanf("%d",&x);

    if(x==0){
        printf("Denominator can't be 0 ");
        return sum = 0;
    }

    printf("1+");
    while(i<=n){
        printf("(1/(%d^%d))+",x,i);
        sum+=(1/(pow(x,i)));
        i++;
    }
    printf("\n sum is: %d",sum);
}