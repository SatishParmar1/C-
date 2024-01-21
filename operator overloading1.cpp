#include<iostream>
using namespace std;
class increment{
    int value;
    public:
    increment(){
        value = 0;
    }
    increment(int x){
        value = x;
    }

    void display(){
        cout<<value<<endl;
    }

    increment operator -- (){
        increment inc;
        value = value-1;
        inc.value = value;
    
    }
    increment operator -- (int d){
        increment inc;
        inc.value = value;
        value = value-1;

    }

};

int main(){
    increment i(18),j;
    i.display();  //18
    j.display();   //0
    j=i--;
    i.display();  //19
    j.display();  //18
    j= --i;
    i.display();  //20
    j.display();   //20
    
}

