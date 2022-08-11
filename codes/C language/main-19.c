//program to reverse a number
#include <stdio.h>
int main()
{
    int reverse=0,remainder,n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    do
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    
    } while (n!=0);
    printf("The reverse is %d",reverse);
    return 0;
}