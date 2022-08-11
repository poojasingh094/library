#include <iostream>
using namespace std;
int main()
{
    int n, A[n];
    cout<<"Enter the size of array";
    cin>>n;
for(int i=0; i<n; i++)//Generally do not prefer to use this method i.e. to take input from user
{
    cout<<"Enter the elements of an array"<<endl;
    cin>>A[i];
}
 cout<<"The elements of an array are"<<endl;
for(int i=0;i<n;i++){
    cout<<A[i]<<endl;
}
return 0;
}