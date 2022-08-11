//Program for insertion in an unsorted array
#include <stdio.h>
int main()
{
    int a[50],size, i,num,pos;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    printf("Enter the elements of an array\n: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
     printf("Enter the position: ");
    scanf("%d",&pos);
     a[size]=a[pos-1];
     size++;
    printf("Enter data to be inserted: ");
    scanf("%d",&num);
     a[pos-1]=num;
      if(pos<=0||pos>size+1)
    {
        printf("Invalid position");
    }
    for(i=0; i<size; i++)
    {
        printf("The updaed elements of an array are: ");
        printf("%d\n",a[i]);
    }
    return 0;

}