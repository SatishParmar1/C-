#include<iostream>
#include<fstream>
using namespace std;
int main(){
char line[30];
ofstream outfile;
outfile.open("satish.odt");
outfile <<"enter your data";
cin>>line;
outfile<<line;
outfile.close();


ifstream infile;
infile.open("satish.odt");
infile>>line;
infile.close();
}
