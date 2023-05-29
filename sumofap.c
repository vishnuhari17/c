#include<stdio.h>
void main(){
    int first_term, commondiff, noTerms;
    int sum = 0;
    printf("Enter the first term of the AP: ");
    scanf("%d",&first_term);
    printf("Enter the common difference: ");
    scanf("%d",&commondiff);
    printf("Enter the no of terms: ");
    scanf("%d",&noTerms);
    for(int i = 0; i < noTerms; i++) {
        sum += first_term + (i*commondiff);
    }
    printf("The sum of terms of the AP is %d\n",sum);
}