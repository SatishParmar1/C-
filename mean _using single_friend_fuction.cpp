#include<iostream>
using namespace std;
class y{
int value1;
int value2;
public:

void read(){
cout<<"Enter your two values"<<endl;
cin>>value1>>value2;
}

friend void display( y a);
};
void display(y a){
float mean;
cout<<"Mean of the values is:";
mean = (a.value1+a.value2)/2;
cout<<mean;
}

int main(){
y a;
a.read();
display(a);
return 0;
}
