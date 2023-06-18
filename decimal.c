#include<stdio.h>
void main()
{
    int decimal, binary= 0, place = 1, reminder;
    printf("Enter the decimal\n");
    scanf("%d",&decimal);
    while(decimal != 0)
    {
        reminder = decimal % 2;
        decimal = decimal / 2;
        binary = binary + reminder * place;
        place = place * 10;
    }
    printf("The binary no is %d\n", binary);
}
