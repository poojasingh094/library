//Program to calculate sum of array elements (taking inputs from user)
#include <stdio.h>
int main()
{
    int marks[10],sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the marks of %d student\n ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum+=marks[i];
    }
        printf("The sum of total marks is %d",sum);
    return 0;

}