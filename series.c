#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,i,prod=1;
    float final=0;
    printf("Enter the value of X : ");
    scanf("%d",&x);
    printf("Enter the no of terms: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        prod *= i;
        if(i%2==0)
        {
            final -= (pow(x,i))/prod;
        }
        else
        {
            final += (pow(x,i))/prod;
        }
        
    }
    printf("The value of the series when evaluated is %f",final);
}