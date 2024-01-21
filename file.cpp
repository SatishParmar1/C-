#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    ifstream in;
string data;
out.open("file1.txt");
cout<<"enter your value"<<endl;
getline(cin,data);
out<<data;
out.close();

in.open("file1.txt");\
getline(cin,data);
cout<<data;
in.close();
}