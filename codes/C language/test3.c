//Program for deletion in an array
#include <stdio.h>
int main()
{
    int a[50],i,size,pos;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    printf("Enter the elements of an array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of an array is: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the position from which data is to be deleted: ");
    scanf("%d",&pos);
    if(pos<=0||pos>size)
    {
        printf("Invalid Position");
    }
    for(i=pos-1; i<size; i++)
    {
        a[i]=a[i+1];
    }
    size--;
    printf("The updated elements are: ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}