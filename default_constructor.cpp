#include<iostream>
using namespace std;
class Student{
char name[10];
int Class;
float marks;
public:
Student();
void display(){
cout<<name<<endl<<Class<<endl<<marks<<endl;
}
};
Student:: Student(){
cout<<"Enter your name"<<endl;
cin>>name;
Class = 12;
marks = 7.9;
}

int main(){
int i,n;
cout<<"how many students in your class";
cin>>n;
Student s[n];
for(i=0;i<n;i++){
s[i].display();
}
return 0;
}
