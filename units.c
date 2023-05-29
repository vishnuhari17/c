#include<stdio.h>
void main()
{
    float n,charge;
    printf("enter the units consurned\n");
    scanf("%f",&n);
    if (n<=250)
    {
        charge=n*0.23;
    }
    else if(n>250 && n<=400)
    {
        charge=n*0.29;
    }
    else if(n>400 && n<=700)
    {
        charge=n*0.32;
    }
    else if(n>700)
    {
        charge=n*0.35;
    }
    if(charge>100)
    {
        charge=charge+charge*12/100;
    }
    if(charge<35)
    {
        charge=35;
    }
    printf("The charge is %f",charge);
}

