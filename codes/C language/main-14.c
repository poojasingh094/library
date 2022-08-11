//Generate multiplication table
#include <stdio.h>
int main()
{
    int num1, i;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    for (i = 1; i <= 10; i++)
    {
        num1 *= i;
        printf("%d *%d =%d", num1, i);
    }
    return 0;
}