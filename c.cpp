#include<iostream>
using namespace std;
class all{
    public:
    void read(int number1){
    
        cout<<number;
    }
    void read(float value1){
        cout<<value;
    }
     void read(char name1){
        cout<<name1;
    }

   all(){
    cout<<"Exception caught "<<endl;
   }
};

int main(){

  int number1;
  float value1;
  char name1[20];
    cout<<"Enter your number"<<endl;
     cin>>number1>>value1>>name1;
    cout<<"Integer  is :"<< number1<<endl<<" float is :"<< value1<<endl"char is :"<< name1<<endl;

        try{
            all a;
           a.read(number1) a;
           throw num1;
        }
        catch{
        cout<<"the integer is :"<<num1;
        }
        try{all b;
            b.read();
            throw value1;
        }
        catch{
        cout<<"the float is :"<<value1;
        }
        try{ all c;
            c.read(name1);
            throw name1;
        }
        catch{
        cout<<"the char is :"<<name1;
        }
    }
