#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    
}