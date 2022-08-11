// Check whether a charater is an alphabet or not 
#include <stdio.h> 
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>='a'&&c<='z'||c<='Z'&&c>='A')
    {
        printf("you entered an alphabet");
    }
    else
    {
    printf("This is not an alphabet");
    }
    return 0;
}