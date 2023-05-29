#include<stdio.h>
void main()
{
    int a;
    printf("Enter age\n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("%d is eligible to vote",a);
    }
    else
    {
        printf("%d is not eligible to vote",a);
    }
}