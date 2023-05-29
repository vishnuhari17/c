#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else
    {
        ch = ch + 32;
    }
    printf("%d",ch);
}


