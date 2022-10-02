#include<iostream>
using namespace std;

inline int read(int n){
return n*n*n;
}

int main(){
int cube1,n;
cout<<"Enter your value";
cin>>n;
cube1 = read(n);
cout<<"Cube of number is"<<n;


return 0;
}
