//Program to check whether a number is even or odd
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n%2== 0)
    {
        printf("you entered an even number");
    }
    else
    {
        printf("you entered an odd number");
    }
    return 0;
}
