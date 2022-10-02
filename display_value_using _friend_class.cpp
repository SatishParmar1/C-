#include<iostream>
using namespace std;
class Second;
class First{
int value1;
public;
void read(int a){
value1 = a;
}
void display(s);
};
class Second {
int value2;
public;
void get(int b){
value2= b;
}
friend void First :: display(s);
};

friend void First :: display(Second s){
cout<<"your First value is "<<value1;
cout<<"your Second value is "<< s.value2;
}

int main(){
int a;
int b;
First f;
Second s;
cout<<"Enter your first value"<<endl;
cin>>a;
cout<<"Enter your Second value"<<endl;
cin>>b;
f.read(a);
s.get(b);
f.display(s);
}
