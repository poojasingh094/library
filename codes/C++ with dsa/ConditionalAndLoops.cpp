#include <iostream>
using namespace std;
int main()
{
    /* int a;
    cin>>a;
    cout<< "value of a is:"<<a<<endl;*/
    // int a,b;
    // cin>>a>>b;
    // cout<<"value of a and b is"<<a<<" "<<b<<endl;
    // a=cin.get();//cin.get() reads character value only
    // cout<<"value of a is:"<<a<<endl;
    /* cout<<"enter the value of a:"<<endl;
      cin>>a;
      if(a>0){
          cout<<"a is positive";
          }
          else if(a<0){
              cout<<"a is negative";
          }
          else {
              cout<<"a is 0";
          }
          */
    /* char ch;
     cout<<"enter the value of character:"<<endl;
     cin>>ch;
     if(ch>='a'&&ch<='z'){
        .

                   mcout<<"you entered lowercase ";
     }
     else if(ch>='A'&&ch<='Z'){
         cout<<"you entered uppercase";
     }
     else{
         cout<<"you entered numeric";
     }

int a ,sum=0;
cin>>a;
for(int i=1;i<=a;i++){
  sum+=i;
}
cout<<sum;

 int n,sum=0,i=1;
 cin>>n;
 while(i<=n){
     sum+=i;
     i=i+1;
 }
 cout<<"value of sum is:"<<sum<<endl;

int a,sum=0;
int i=2;
cin>>a;
while(i<=a){
    sum+=i;
    i=i+2;
}
cout<<sum;
int a ,sum=0;
cin>>a;
for(int i=2;i<=a;i+=2){
  sum+=i;
}
cout<<sum;
*/
    int a;
    int i = 2;
    cin >> a;
    while (i < a)
    {
        if (a % i == 0)
        {
            cout << "not prime" << endl;
        }
        else
        {
            cout << "is prime";
        }
        i = i + 1;
    }
}