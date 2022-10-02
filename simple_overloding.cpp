#include<iostream>
using namespace std;
class Number{

public:

void print(int a){
cout<< a;
}
 void print(float b){
cout<< b;
}

void print(char c){
cout<<c;
}
};
 
 int main(){
 
 Number n;
 int q;
 float p;
 char s;

cout<<"Enter your value int / float / char";
cin>>q>>p>s;
n.print(q);
n.print(p);
n.print(s);
return 0;
}
