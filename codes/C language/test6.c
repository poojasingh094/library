//Pointer and Array
#include <stdio.h>
int main()
{
int a[]={6,2,1};
int *q;
q=a;
printf("%p\n",a);
printf("%p\n",q);
printf("%d\n",a[2]);
printf("%d\n",*(a+2));
printf("%d\n",*(q+2));
printf("%d\n",2[a]);// *(i+a)=i[a]
printf("%d\n",*(2+a));
printf("%d\n",*(2+q));
printf("%d\n",2[q]);// *(i+q)=i[q]
printf("%p\n",a+1);
printf("%p\n",&a+1);//&a+1 = size*w+B
q++;//*(i+a)=i[a]=*(a+i)=a[i]..can replace a by q
printf("%p\n",q);
printf("%d",*a+1);
return 0;
}
#include <stdio.h>
int main()
{
    int a[5],i;
    int *q=a;
    printf("Enter the elements of an array: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
return 0;

}