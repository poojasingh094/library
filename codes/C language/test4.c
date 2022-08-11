// program for deletion in an unsorted array
#include <stdio.h>
int main()
{
    int a[50], i, size, pos;
    printf("Enter the size of an array: ");
        scanf("%d",&size);
    printf("Enter the elements of an array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of an array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    printf("Enter the position where element is to be deleted: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)
    {
        printf("Invalid Position");
    }
    a[pos - 1] = a[size - 1];
    size--;
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}