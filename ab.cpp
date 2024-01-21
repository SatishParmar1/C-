#include<iostream>
using namespace std;
int main(){
  int salary,hra,basic,da;
  cout<<"enter your basic hra and da salary"<<endl;
  cin>>basic>>hra>>da;
  salary = basic+hra+da;
cout<<"your salary is: " <<salary<<endl;
  try{
      if(salary <= 0){
      throw salary;
       }
        if(salary >=200000 ){
            throw salary;
        } 
  }
  catch (int a){
    cout<<"exception caught ";
  }
  
}