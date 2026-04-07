#include<iostream>
using namespace std;
class student
{
    public:
     int id;
     string name;
     int marks;

     void display()
     {
         cout<<"id: "<<id<<endl;
         cout<<"\t name: "<<name<<endl;
         cout<<"\t marks: "<<marks<<endl;
         cout<<"\n";
     }
};

int main()
{
    student s1;
    s1.id=12345;
    s1.name="pratham";
    s1.marks=200; 
    s1.display();

    
    return 0;
}