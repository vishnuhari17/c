#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,prod=1,final=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        prod *= i;
        if(i%2==0)
        {
            final -= (pow(n,i))/prod;
        }
        else
        {
            final += (pow(n,i))/prod;
        }
        
    }
    printf("The value of the series when evaluated is %d",final);
}