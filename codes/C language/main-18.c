//count the number of digits in an integer
#include<stdio.h>
int main()
{
    int count=0,n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    do
    {
    n/=10;
    count++;
    } while (n!=0);
    printf("The number of digits in an integer is %d",count);
  
    return 0;
}