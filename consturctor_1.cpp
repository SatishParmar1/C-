#include<iostream>
using namespace std;
class sample{
int age;
float salary;
public:
sample(int age, float salary);
void display(){
cout<<age<<endl<<salary;
}
};
sample :: sample(int a,float b){
 age = a;
 salary = b;
 }
 int main(){
 int a;
 float b;
 cout<< "Enter your value";
 cin>>a>>b;
 sample s(a,b);
 s.display();
 return 0;
 }
 
