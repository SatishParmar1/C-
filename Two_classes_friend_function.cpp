#include<iostream>
using namespace std;
class y;
class x{
int value1;
public:
void read(int num1){
value1 =num1;
}

friend void display(x,y);
};

class y{
int value2;
public:
int get(int num2){
value2 = num2;
}
friend void display(x,y);
};

void display(x a,y b){
cout<<"your first value is: "<< a.value1;
cout<<"your second value is: " << b.value2;
}

int main(){
x a;
y b;
 
a.read(3);
b.get(5);
display(a,b);
}
