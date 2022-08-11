//using do while loop
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter positive number: ");
    scanf("%d",&n);
    i=1;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("sum of numbers is %d",sum);
    return 0;
}