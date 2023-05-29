#include <stdio.h>
void main()
{
    float a, x, r;
    printf("Which conversion do you prefer to make\n1.Rupees to Dollars\n2.Dollars to Rupees\n");
    scanf("%f", &r);
    if (r == 1)
    {
        printf("Enter the amount in Rupees : ");
        scanf("%f", &a);
        x = a / 81;
        printf("The amount in Dollars is %f\n", x);
    }
    else if (r == 2)
    {
        printf("Enter the amount in Dollars : ");
        scanf("%f", &a);
        x = a * 81;
        printf("The amount in Dollars is %f\n", x);
    }
    else
    {
        printf("Invalid input!!\n");
    }
}

