#include <iostream>
using namespace std;
int main()
{
    int A[5];
    A[0]=1;
    A[1]=2;
    A[2]=3;
    A[3]=4;
    A[4]=5;
    cout<<sizeof (A)<<endl;
    cout<<A[0]<<endl;
    cout<<A[1]<<endl;
    cout<<A[2]<<endl;
    cout<<A[3]<<endl;
    printf("%d",A[3]);

    return 0;
}
