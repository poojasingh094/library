//Linear search in array
#include <stdio.h>
int main()
{

    int a[10], x;
    printf("Enter  elements of array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element to search\n ", x);
    scanf("%d", &x);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            printf("you found the element");
            break;
        }
        else
        {
            printf("element not found");
            break;
        }
    }
return 0;
}