#include<stdio.h>
void main(){
    int n, m, rev=0, rem, first, last, sum;
    printf("Enter the number\n");
    scanf("%d",&n);
    m = n;
    while(n>0){
        rem = n%10;
        n = n/10;
        rev=rev*10+rem;
    }
    first = rev % 10;
    last = m % 10;
    sum = first + last;
    printf("The Sum of first and last digit is %d", sum);
}
