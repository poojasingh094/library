//Check whether a number is positive negative or zero
#include <stdio.h>
int main ()
{
    int num1;
    printf("Enter an integer: ");
    scanf("%d",&num1);
    if (num1>0)
    {
        printf("you entered a positive number");
    }
    else if (num1<0)
    {
        printf("you entered a negative number");
    }
    else
    {
    printf("you entered 0");
    }
    return 0;
}