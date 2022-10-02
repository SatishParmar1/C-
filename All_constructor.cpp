#include<iostream>
using namespace std;
class All {
int value1;
int value2;
public:
All();
All(int num1, int num2);
All(All&s2);
void display(){
cout<<"your value is :"<<endl<<value1<<endl<<value2;
}
};

All ::All(){
value1 = 10;
value2 = 20;
}
All ::All(int num1, int num2){
value1 = num1;
value2 = num2;
}
All :: All(All &s2){
value1= s2.value1;
value2 = s2.value2;
}

int main(){
int num1,num2;
cout <<"Enter your values : "<<endl;
cin>>num1>>num2;
All s1;
All s2(num1,num2);
All s3(s2);
s1.display();
s2.display();
s3.display();
return 0;
}

