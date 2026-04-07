#include<iostream>
using namespace std;

class student
{
    public:
     int usn;
     string name;
     char grade;
    private:
     int marks_1,marks_2;
public:
void setdata()
    {
        cout<<"Enter marks of subject 1: ";
        cin>>marks_1;
        cout<<"Enter marks of subject 2: ";
        cin>>marks_2;
        
    }
void display()
    {
        cout<<"usn: "<<usn;
        cout<<"\t name: "<<name<<endl;
        cout<<"\t grade: "<<grade<<endl;
        cout<<"\t marks in subject 1: "<<marks_1<<endl;
        cout<<"\t marks in subject 2: "<<marks_2<<endl;
    }

};

int main()
{
    student s1,s2;
    s1.usn=419;
    s1.name="Pratham";
    s1.grade='A';
    s1.setdata();                   
    s1.display();

    s2.usn=420;
    s2.name="parth";
    s2.grade='B';
    s2.setdata();
    s2.display();
    return 0;
}
