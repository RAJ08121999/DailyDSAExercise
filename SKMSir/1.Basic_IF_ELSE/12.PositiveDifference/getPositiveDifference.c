#include<stdio.h>
#include<conio.h>

int main(){
    int x , y , res;
    // res will hold the result and the result of x-y will be always positive;

    printf("Enter the value of x ");
    scanf("%d",&x);

    printf("Enter the value of y ");
    scanf("%d",&y);

    if(x>y){
        res = (x-y);
        printf("Result is %d",res);
        return res;
    }
    else{
        res = (y-x);
        printf("Result is %d",res);
        return res;
    }
}