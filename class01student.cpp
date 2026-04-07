#include<iostream>
using namespace std;

class student
{
    public:
     int id;
     string name;

    void display()
    {
        cout<<"id: "<<id;
        cout<<"\t name: "<<name<<endl;
        cout<<"\n";

    }

};
int main()
{
    student s1,s2;
    s1.id=419;
    s1.name="Pratham";
    s1.display();

    s2.id=420;
    s2.name="parth";
    s2.display();
    return 0;
}
