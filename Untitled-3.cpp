#include<iostream>
using namespace std;
class hello{
    int num;
    public:
    hello(int a){
        num = a;
        cout<<"Exception caught your number is Even"<<endl<<num<<endl;
    }
};
int main (){
    int a;
    cout<<"Enter your value"<<endl;
    cin>>a;
    try{
        if (a %2 == 0){
            hello h(a);
           throw a;
        }else{
            cout<<"your number is odd"<<endl<<a;
        }
    }
    catch(int a){
        cout<<"Exception caught";
    }
    
    }
