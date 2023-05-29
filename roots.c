#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x,y,r,s,t;
    printf("Enter the coefficients\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    x=-b/2*a;
    y=sqrt(d)/2*a;
    if(d>0)
    {
        printf("%f+%f,%f-%f",x,y,x,y);
    }
    else if(d==0)
    {
        printf("Equal roots are %f",x);
    }
    
    else
    {
        r=4*a*c-b*b;
        s=-b/2*a;
        t=sqrt(r)/2*a;
        printf("%f+i%f,%f-i%f",s,t,s,t);
    }

}