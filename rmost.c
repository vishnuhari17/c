#include<stdio.h>
void main()
{
    float a;
    int j, r_digit;
    printf("Enter the floating point no\n");
    scanf("%f", &a); 
    j= a;
    r_digit = j % 10;
    printf("The rightmost digit of the integral part is %d",r_digit);
}
