#include<stdio.h>
void main(){
    int octal, decimal = 0, remainder, place=1;
    printf("Enter the decimal no\n");
    scanf("%d", &octal);
    while(octal != 0){
        remainder = octal % 10;
        octal = octal / 10;
        decimal = decimal + remainder * place;
        place = place * 8;
    }
    printf("The no in octal is %d", decimal);
}