#include<stdio.h>
void main(){
    int num1,num2,i,sum,factorial1 = 1,factorial2 = 1;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    for(i = 1; i <= num1; i++){
        factorial1 *= i;
    }
    for(i = 1; i <= num2; i++){
        factorial2 *= i;
    }
    sum = factorial1 + factorial2;
    printf("The sum of factorials of %d and %d id %d\n",num1,num2,sum);
}

