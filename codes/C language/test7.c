#include <stdio.h>
int main()
{
    int a[5], i;
    int *q ;
    q=a;
    printf("Enter the elements of an array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &i[q] );//(a+i)..&a[i]..&q[i]..(q+i)
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", *(q+i));//a[i]..*(a+i)..i[a]...i[q]
    }
    return 0;
}