#include<iostream>
using namespace std;
int main(){
int*p = new int;
*p  = 18;
if( p ==NULL){
cout<<"memory not allocated";
}else{
cout<<*p;
}
return 0;
}
