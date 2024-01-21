#include<iostream>
using namespace std;
template<class t1 ,class t2>
class hello{
    t1 num1;
    t2 num2;
    public:
    void hi(t1 value1 ,t2 value2){
        num1 = value1; 
        num2 = value2;
        cout<<"your value is "<<endl<<num1<<endl<<num2<<endl;
    }
 float add(){
   return num1+num2;
}
};
int main(){
    int value1;
    float value2;
    char value3;
    cout<<"enter your values"<<endl;
    cin>>value1>>value2>>value3;
   hello<int,int>f;
   f.hi(value1,value1);
   cout<<"addition of value is "<<f.add()<<endl;
   hello<int,float> s;
   s.hi(value1,value2);
   cout<<"sub of value is" <<s.add()<<endl;
   hello<float,char>a;
   a.hi(value2,value3);
    a.add();

}