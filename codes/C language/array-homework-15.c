//program to calculate sum of elements in array without taking inputs from user
#include <stdio.h>
int main()
{
    int marks[] = {5,4,2,8,9,6,1,3,7,10},sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=marks[i];
    }
    printf("The sum of elements in array is %d",sum);
    return 0;
}