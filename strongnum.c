#include<stdio.h>
void main(){
    int num,num2,fibonacci,digit,sum=0;
    printf("Enter the no: ");
    scanf("%d", &num);
    num2 = num;
    while(num > 0){
        fibonacci = 1;
        digit = num % 10;
        num /= 10;
        for(int i = 1; i <= digit; i++){
            fibonacci *= i;
        }
        sum += fibonacci;
    }
    if(sum == num2){
        printf("%d is a Strong number\n",num2);
    }
    else{
        printf("%d is not a Strong number\n",num2);
    }
}