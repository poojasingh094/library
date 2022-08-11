#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    char x;
};//can define or declare the variable here too
struct Rectangle r={10,5};//can write this line in main too
int main()
{
    r.length=15;
    r.breadth=20;
    printf("%d\n",r.length);
    cout<<r.breadth<<endl;
    printf("%lu",sizeof(r));//for char also allocating 4 bytes but using only 1 bytes
return 0;
}
