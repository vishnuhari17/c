#include<stdio.h>
void main()
{
    int n, i=1, factorial=1;
    printf("Enter a num\n");
    scanf("%d", &n);
    while(i<=n){
        factorial = factorial * i;
        i += 1;
    }
    printf("The factorial of %d is %d\n", n, factorial);
    
}