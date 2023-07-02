#include<stdio.h>
void main(){
    int n, m, rev=0, rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    m = n;
    while(n>0){
        rem = n%10;
        n = n/10;
        rev=rev*10+rem;
    }
    if(rev == m){
        printf("%d is a palindrome\n", m);
    }
    else{
        printf("%d is not a palindrome\n", m);
    }

    
}

