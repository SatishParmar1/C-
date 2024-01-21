#include<iostream>
#include<fstream>
using namespace std;
int main(){
string line;
ofstream outfile;
outfile.open("satish.odt");
cout<<"enter data untill -1";
while(outfile){
getline(cin,line);
if(line == 1){
cout<<"done";
break;}
outfile<<line;
}
outfile.close();

ifstream infile;
infile.open("satish.odt");
cout<<"read data untill -1";
while(infile){
getline(infile,line);
cout<<line;
}
infile.close();
}
