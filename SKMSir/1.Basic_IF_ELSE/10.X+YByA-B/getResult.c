#include<stdio.h>
#include<conio.h>

int main(){
    int x , y , a , b , z = 0 , c = 0;
    int status = 0 , result; 
    // status will hold 0 if division is not possible/undefined else status = 1
    
    printf("Enter the value of x:");
    scanf("%d",&x);
    
    printf("Enter the value of y:");
    scanf("%d",&y);
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    
    printf("Enter the value of b:");
    scanf("%d",&b);

    c = ( a - b );

    printf("******** Operation is ************* \n ********((X+Y)/(A-B))*********\n");

    if(c==0){
        printf("division by 0 is not possible , status:%d",status);
        return status;
    }
    else{
        status = 1 ;
        z = ( x + y );
        result = (z/c);
        printf("result is %d , status :%d",result,status);
        return status;
    }
}