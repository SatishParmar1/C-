#include<iostrea>
using namespace std;
class Number {
public:
int exam(int dsa,int oop,int SE,int DE);
float value(int sum);
};
inline int Number :: exam(int dsa,int oop,int SE,int DE){
return dsa+oop+SE+DE;
}
inline float Number :: value(float sum){
return sum*100/100;
}

int main(){
Number e;
int d,o,s,a;
cout<<"Enter your Number";
cin>>d>>o>>s>>d;
int sum= e.exam(d,o,s,a);
cout<<"Sum of all Number is "<<sum;   
float per = e.value(sum);
cout<< "percentage of all subject is :"<< per;
return 0;
} 
