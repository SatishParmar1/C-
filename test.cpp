#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
ifstream in;
string data;
out.open("hello.txt");
cout<<"enter your value"<<endl;
cin>>data;
out<<data;
out.close();

in.open("hello.txt");
in>>data;
cout<<data;
in.close();
}

