// Finding sum of natural number
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
        printf("sum of numbers is %d",sum);
    }
    return 0;
}
    
