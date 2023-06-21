#include<stdio.h>
void main()
{
    int a,b,sum=0,choice;
    char ch;
    do
    {
        printf("Enter any two numbers\n");
        scanf("%d%d",&a,&b);
        printf("Which operation do you wish to perform?\n");
        printf("\t1--Addition\n\t2--Subtraction\n\t3--Multiplication\n\t4--Division\n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : sum = a+b;
                     break;
    
            case 2 : sum = a-b;
                     break;

            case 3 : sum = a*b;
                     break;
            
            case 4 : sum = a/b;
                     break;
            
            default:printf("Invalid Choice :/ \n");
            
        }
        printf("The result is : %d\n",sum);
        printf("DO YOU WANT TO CONTINUE? (y/n) : ");
        scanf("%s",&ch);
    }while(ch=='Y'|| ch=='y');
}