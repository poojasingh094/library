//Program for traversal in array
#include <stdio.h>
int main()
{
    int a[50],size,i;
    printf("\nEnter the size of array");
    scanf("%d",&size);
    printf("\nEnter the elements in array: ");
    for(i=0; i<size; i++)
    {                                    
        scanf("%d",&a[i]);
    }
    printf("\nElements in array are: ");
    for (i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}