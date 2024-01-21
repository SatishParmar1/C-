#include<iostream>
using namespace std;
template< class t1>
class first{
t1 num1;
t1 num2;
public:
void read(t1 value1 , t1  value2 ){
num1= value1;
num2= value2;
cout<<"value is "<<num1<<endl<<num2<<endl;
}
};
int main(){
int value1;
int value2;
cin>>value1>>value2;
first<int> f;
f.read(value1,value2);
}


