#include<stdio.h>
#include<math.h>
void sinx(float x,int lim);
void cosx(float x,int lim);
void main()
{
    int x,n,choice,ch;
    float rad;
    do{
    printf("Which operation do you wish to perform ?\n");
    printf("1:Sinx\t2:Cosx\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    printf("Enter the angle in degrees : ");
    scanf("%d",&x);
    rad = (3.14/180)*x;
    printf("Enter the limit : ");
    scanf("%d",&n);
    switch (choice)
    {
    case 1: sinx(rad,n);
            break;

    case 2: cosx(rad,n);
            break;
    
    default: printf("Invalid input\n");
    }
    printf("Press 1 to continue : ");
    scanf("%d",&ch);
    }while(ch == 1);
}

void sinx(float x,int lim)
{
    int i,j,k=1,fact;
    float term, final=0;
    for(i=1;i<=lim;i+=2)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact = fact * j;
        }
        term = (pow(x,i)/fact) *k;
        final += term;
        k = k*(-1);
    }
    printf("The value of the series is %f\n", final);
}

void cosx(float x,int lim)
{
    int i,j,k=1,fact;
    float term, final=0;
    for(i=0;i<=lim;i+=2)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact = fact * j;
        }
        term = (pow(x,i)/fact) *k;
        final += term;
        k = k*(-1);
    }
    printf("The value of the series is %f\n", final);
}