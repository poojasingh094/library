//find largest among three numbers
#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three integers: ");
    scanf("%d %d %d",&num1, &num2, &num3);
    if((num1>num2)&&(num1>num3))
    {
        printf("%d is largest number",num1);
    }
    else if((num2>num1)&&(num2>num3))
    {
        printf("%d is largest number",num2);
    }
    else
    {
        printf("%d is largest",num3);
    }
    return 0;
}