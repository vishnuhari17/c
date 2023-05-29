#include<stdio.h>
void main()
{
    int n,a,b,i,c;
    printf("Enter a num\n");
    scanf("%d",&n);
    i=2;
    a=0;
    b=1;
    printf("%d%d",a,b);
    while(i<n)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        i=i+1;
    }
}