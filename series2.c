#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,i,prod=1,k=1;
    float term, final=0;
    printf("Enter the value of X :");
    scanf("%d",&x);
    printf("Enter the no of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        prod *= i;
        term = (pow(x,i)/prod)*k;
        final += term;
        k *= -1;
    }
    printf("The Sum of the series is %f",final);

}