#include<iostream>
using namespace std;
class Amount{
long principle;
float rate;
int time;
public:
Amount();
Amount(long a , float b,int c);
Amount(Amount&s3);
Amount(int c);
Amount(long a,int b);
void display(){
float deposit = principle+(principle*rate*time)/100;
cout <<"The deposit amount is :"<< "  "<<deposit<<endl;
}
};

Amount :: Amount(){
principle = 2999;
rate = 3.8;
time = 4;
}
Amount :: Amount(long a, float b,int c){
principle = a;
rate = b;
time = c;
}
Amount ::Amount (Amount &s3){
principle = s3.principle;
rate = s3.rate;
time = s3.time;
}
Amount:: Amount(int c){
principle = 30000;
rate = 1.8;
time = c;
}
Amount ::Amount(long a,int b){
principle = a;
rate = b;
time = 1.2;
}

int main(){
long a;
int c;
float b;
cout <<"Enter your principle , rate and time :"<<endl;
cin>>a>>b>>c;
Amount s1;
Amount s2(c);
Amount s3(a,b,c);
Amount s4(s3);
Amount s5(b);
s1.display();
s2.display();
s3.display();
s4.display();
s5.display();
return 0;
}
