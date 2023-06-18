#include<stdio.h>
#include<math.h>
void main()
{
    int a, i, sum, rem, r;
    for(i=111;i<=999;i++)
    {
        a=i;
        sum=0;
        while(a>0)
        {
            rem=a%10;
            r=pow(rem,3);
            sum = sum + r;
            a=a/10;

        }
        if(sum==i)
        {
            printf("%d is an armstrong number\n",i);
        }
    }
}