#include<stdio.h>
void main()
{
    int binary, decimal = 0, place = 1, reminder;
    printf("Enter the binary\n");
    scanf("%d",&binary);
    while(binary != 0)
    {
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + reminder * place;
        place = place * 2;
    }
    printf("The decimal no is %d\n",decimal);
}