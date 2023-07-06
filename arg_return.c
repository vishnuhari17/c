#include<stdio.h>
int sum();
void main()
{
    int n, m, c;
    printf("Enter First number : ");
    scanf("%d", &n);
    printf("Enter Second number : ");
    scanf("%d", &m);
    c = sum(n,m);
    printf("The sum is %d", c);
}
int sum(int p, int q)
{
    int s;
    s = p + q;
    return s;
}