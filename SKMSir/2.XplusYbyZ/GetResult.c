#include<stdio.h>
#include<conio.h>
int main(){
    int x,y,z,res;
    int sum = 0;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("Enter the value of Y:");
    scanf("%d",&y);
    printf("Enter the value of Z:");
    scanf("%d",&z);

    if(z==0){
        printf("Dividing by zero is not possible");
        return res=-1;
    }
    else{
        sum = (x+y);
        res = (sum/z);
        printf("result is %d",res);
        return res;
    }
}