//Program to check whether a character is vowel or constant
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c",&c);
 if(c=='a'||c=='e'||c=='o'||c=='i'||c=='o'||c=='u')
 {
     printf("you entered a vowel");
 }
 else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
 {
     printf("you entered a vowel");
 }
 else
 {
     printf("you entered a consonant",c);
 }
    return 0;
    }

