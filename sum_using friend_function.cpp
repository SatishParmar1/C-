#include<iostream>
using namespace std;
class Second;
class First{
int value1;
public:
void read(int a){
value1 = a;
}
friend void sum(First,Second);
};

class Second{
int value2;
public:
void get(int b){
value2 = b;

}
friend void sum(First,Second);
};

void sum(First f,Second s){
int sum;
sum = f.value1+s.value2;
cout<<"Sum of the both value are:"<<endl<<sum<<endl;
}

int main(){
int a;
int b;
First f;
Second s;
cout<<"Enter your first value"<<endl;
cin>>a;
f.read(a);
cout<<"Enter your Second value"<<endl;
cin>>b;
s.get(b);
sum(f,s);
}
