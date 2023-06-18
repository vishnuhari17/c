#include<stdio.h>
void main()
{
    int a, b, i, hcf, lcm;
    printf("Enter the numbers\n");
    scanf("%d%d", &a, &b);
    for(i = 1; i <= a; i++)
    {
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    lcm=(a*b)/hcf;
    printf("The HCF and LCM of %d and %d is %d and %d\n",a, b, hcf, lcm);
}

