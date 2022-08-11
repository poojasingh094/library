//Program for insertion in array
#include <stdio.h>
int main()
{
    int a[50],size,pos,num,i,item;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter data to be inserted: ");
    scanf("%d",&num);
    printf("Enter the position: ");
    scanf("%d",&pos);
      if(pos<=0||pos>size+1)
    {
        printf("Invalid position");
    }
    for(i=size-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    item=a[pos-1];
    a[pos-1]=num;
    size++;
      printf("The updated elements in array are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("The deleted element is %d",item);
return 0;
}