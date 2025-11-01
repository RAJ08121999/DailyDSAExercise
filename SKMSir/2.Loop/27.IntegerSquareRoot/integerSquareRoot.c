// problem statement -> find integer square root of an integer ; square root of 20 = 4 ; sqrt of 40 = 6

#include<stdio.h>
int main(){
    int num , root=0, i=1;
    printf("Enter the number:");
    scanf("%d",&num);

    while(i*i<=num){
        root=(i*i);
        printf("%d\n",root);
        i++;
    }
    printf("integer square root of %d is %d :",num,i-1);
}