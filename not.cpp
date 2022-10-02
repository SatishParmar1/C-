/* funtion define not inline the class */

#include<iostream>
using namespace std;
class Second {
public:
void display();
};
void Second :: display(){
cout<< "ram";
}
int main(){
Second n;
n.display();
}


