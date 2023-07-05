#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,i,j,k=1,fact;
    float rad, term, final=0;
    printf("Enter the value of X in degrees: ");
    scanf("%d",&x);
    rad = (3.14/180)*x;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2)

    
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact = fact * j;
        }
        term = (pow(rad,i)/fact) * k;
        final += term;
        k = k*(-1);
    }
    printf("The value of the series is %f", final);
}