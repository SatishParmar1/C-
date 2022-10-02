#include<iostream>
using namespace std;
class Square;
class Ractangular{
int value1;
int value2;
public:
void read(int a,int b){
value1 = a;
value2 = b;
}
friend void area (Ractangular,Square);
};

class Square{
int value3;
public:
void get(int c){
value3= c;

}
friend void area(Ractangular,Square);
};

void sum(Ractangular r,Square s){
int area1;
int area2;
area1 = r.value1 * r.value2;
area2 = s.value3 * s.value3;
cout<<"area of ractangular is : "<<endl<<area1<<endl;
cout<<"area of square is : " << endl<<area2<<endl;
}

int main(){
int a;
int b;
int c;
Ractangular r;
Square s;
cout<<"Enter your length"<<endl;
cout<<"Enter your breadth "<<endl;
cin>>a;
cin>>b;
r.read(r,s);
cout<<"Enter your Side"<<endl;
cin>>c;
s.get(c);
area(r,s);
}
