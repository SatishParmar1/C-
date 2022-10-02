#include<iostream>
using namespace std;
class Second;
class First{
int value1;
public:
void read(){
cout<<"Enter your value";
cin>>value1;
}
friend void display(First,Second);
};

class Second{
int value2;
public:
void get(){
cout<<"Enter your value";
cin>>value2;
}

friend void display(First,Second);
};

void display(First f, Second s){
int sub = 0;
sub = f.value1-s.value2;
cout<<"sub of value1 and value2 is "<<sub;
}

int main(){
First f;
Second s;

f.read();
s.get();
display(f,s);
}

