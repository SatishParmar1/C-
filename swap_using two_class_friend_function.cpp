#include<iostream>
using namespace std;
class y;
class x{
int a;
public:
void read(){
cout<<"Enter your first value"<<endl <<"a = ";
cin>> a;
}
friend void display(x,y);
};

class y{
int b;
public:
void get(){
cout<<"Enter your second value"<<endl<<"b = ";
cin>>b;
}
friend void display(x,y);
};

void display(x p ,y q){
int temp;

temp = p.a;
p.a = q.b;
q.b = temp;

cout <<"After swap" << endl<< "a = "<< p.a<<endl<< "b = "<<q.b<<endl;
}

int main(){
x p;
y q;

p.read();
q.get();
display(p,q);
}

