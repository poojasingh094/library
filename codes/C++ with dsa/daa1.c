// Insertion Sort Program in C
#include <stdio.h>
int main()
{
    int n,i,j,temp,a[30];
    printf("Enter the size of an array:\n ");
    scanf("%d", &n);
    printf("\nEnter the number of elements in an array:\n ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while((j>=0)&&(a[j]>temp))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\n sorted list is as follows: ");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;

}
