#include<iostream>
using namespace std;
class collage{
    int no;
    char name[25];
    int marks;
    public:
    void bio(){
        cout<<"Enter your roll no ,name,marks"<<endl;
        cin>>no>>name>>marks;
    }
    
    void display(){
        cout<<"roll no : "<<no<<endl<<"Name : "<<name<<endl<<"Marks : "<<marks<<endl;
    }
};
int main(){
    collage s;
    s.bio();
    s.display();
}