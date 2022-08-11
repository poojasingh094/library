//program to find quotient and remainder of two intezers
#include <stdio.h>
int main()
{
    int i, n, quotient, remainder;
    printf("enter dividend\n: ",i);
    scanf("%d",&i);
    printf("enter divisor: ",n);
    scanf("%d",&n);
    quotient=i/n;
    remainder=i%n;
    printf("quotient=%d",quotient);
    printf("remainder=%d",remainder);

    return 0;

}