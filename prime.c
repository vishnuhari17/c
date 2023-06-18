#include<stdio.h>
void main(){
    int n,i=2,flag=0;
    printf("Enter the no\n");
    scanf("%d",&n);
    while(i<=n/2){
        if(n%i==0){
            flag = 1;
            break;
        }
        i=i+1;
    }
    if(flag!=0){
        printf("The no is not a prime\n");
    }
    else{
        printf("The no is a prime\n");
    }
}