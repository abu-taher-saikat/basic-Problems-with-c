#include <stdio.h>

int main()
{
    int num1, num2, num3; // variables to store the 3 integer values
    int max, min; // variables to store the highest and lowest digit value

    // prompt the user to enter the 3 integer values
    printf("Enter 3 integer values: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // find the highest digit value
    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }

    // find the lowest digit value
    min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }

    // print the highest and lowest digit value
    printf("The highest digit value is: %d\n", max);
    printf("The lowest digit value is: %d\n", min);

    return 0;
}
