#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;  
string data;
out.open("file3.txt");
cout<<"enter your value"<<endl;
while(out){
getline(cin,data);
if(data == "-1")
break;
out<<data<<endl;
}
out.close();
ifstream in;
in.open("file3.txt");
while(getline(in,data)){
cout<<data<<endl;  
}
in.close();
return 0;
}