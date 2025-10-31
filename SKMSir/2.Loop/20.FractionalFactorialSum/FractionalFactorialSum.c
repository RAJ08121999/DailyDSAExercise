// problem statement - (1/1!) + (1/2!) + (1/3!) + (1/4!) + ........+ (1/n!)

#include<stdio.h>
int fact( int num){
    int i = 1 , factorial = 1;

    while(i<=num){
        factorial*=i;
        i++;
    }
    return factorial;
}
int main(){
    int n , i = 1;
    float sum = 0;

    printf("Enter the nth term:");
    scanf("%d",&n);

    while(i<=n){
        printf("(1/%d!)\t + \t ",i);
        sum+=(1/(fact(i)));
        i++;
    }
    printf("\n Sum is:%f",sum);
}

