#include<stdio.h>
void main(){
    int decimal, remainder, octal = 0, place=1;
    printf("Enter the decimal no: ");
    scanf("%d", &decimal);
    while(decimal != 0){
        remainder = decimal % 8;
        decimal = decimal / 8;
        octal = octal + remainder * place;
        place = place * 10;
    }
    printf("The no in octal is %d\n", octal);

}