#include <iostream>
using namespace std;
int main(){
// int n;
// int i=1,j=1;
/*cout<<"enter a number:"<<endl;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        cout<<"*";
    }
    cout<<endl;
}
cout<<"enter n:"<<endl;
cin>>n;
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
}
cout<<"enter n"<<endl;
cin>>n;
for(i=n;i>=1;i--){
    for(j=n;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
}
int count=1;
cin>>n;
while(i<=n){
    while(j<=n){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"*";
            cout<<endl;
        }
        cout<<endl;
    }

}