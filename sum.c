#include<stdio.h>
void main()
{
    int a,rem,rev,b ;
    printf("Enter a number\n");
    scanf("%d",&a);
    b=a;
    rev=0;
    while (a>=1)
    {
        rem=a%10;
        a=a/10;
        rev=rev*10+rem;
    }
    if(b==rev)
    {
        printf("%d is a palindrome",rev);
    }
    else
    {
        printf("%d is not a palindrome",rev);
    }
}
