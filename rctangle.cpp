#include<iostream>
using namespace std;
class rectangle
{
    public:
     
     int  length;
     int breadth;

     void display()
     {
        
         cout<<"\t length: "<<length<<endl;
         cout<<"\t breadth: "<<breadth<<endl;
         cout<<"\n";
     }
};

int main()
{
    rectangle r1,r2;
    
    r1.length=10;
    r1.breadth=20; 
    cout<<"\t area : "<<r1.length*r1.breadth<<endl;
    r1.display();

    
    return 0;
}