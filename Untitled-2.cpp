#include<iostream>
using namespace std;
template<class t>
class calculator {
    t num1;
    t num2;
    public:
    calculator(t a, 2 b){
        num1=a;
        num2 = b;
    }
    t add(){
      return num1+num2;  
    }
    t sub(){
        return num1-num2;  
    }
    t multi(){
        return num1*num2;  
    }
    t div(){
        return num1/num2;  
    }
    };

int main(){
    int value1,value2;
    cout<<"enter your value"<<endl;
    cin>>value1>>value2;
    calculator<int>h(value1,value2);
    cout<<h.add()<<endl;
    cout<<h.sub()<<endl;
    cout<<h.multi()<<endl;
    cout<<h.div()<<endl;

}


