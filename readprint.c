#include<stdio.h>
void main(){
    int n, i=1, a;
    printf("Enter the limit\n");
    scanf("%d", &n);
    while(i <= n)
    {
        printf("Enter the no %d: ", i);
        scanf("%d", &a);
        printf("The no %d is %d\n", i, a);
        i += 1;
    }
}

