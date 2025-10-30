#include<stdio.h>
int main(){
    int x , y , z, status = 0 , result = 0;
    // status will be 0 if division is not possible/undefined and status will be 1 if division is possible
    // result will hold 1 for even or 0 for odd ;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    printf("Enter the value of y : ");
    scanf("%d",&y);

    printf("*********Check the remainder of x/y is even or odd ******* \n");

    if(y==0){
        printf("division by 0 is not possible , status:%d",status);
        return status;
    }

    status = 1;

    z = (x%y);
    printf("the reminder of x/y is :%d \n",z);

    if(z%2==0){
        result = 1;
        printf("remainder is an even number,\n status:%d , \n result%d \n",status,result);
    }
    else{
        printf("remainder is an odd number,\n status:%d , \n result%d \n",status,result);
    }
}
