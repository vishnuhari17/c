//read 3 numbers and find its avg and check whether it is b/w 5 and 10
#include<stdio.h>
void main()
{
    float a,b,c,average;
    printf("Enter three number\n");
    scanf("%f%f%f",&a,&b,&c);
    average = (a+b+c)/3;
    if (average>=5&&average<=10)
    {
        printf("%f is between 5 and 10\n",average);
    }
    else
    {
        printf("%f is not between 5 and 10\n",average);
    }
}