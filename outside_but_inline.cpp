/* function define outside the class but inline */
#include<iostream>
using namespace std;
class Second{
public:
void display();
};

inline void second :: display(){
cout<<"satish";
}
int main(){
second s;
s.display();
return 0;
}
