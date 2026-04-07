#include<iostream>
using namespace std;
class car
{
    public:
     int id;
     string brand;
     int speed;

     void display()
     {
         cout<<"id: "<<id<<endl;
         cout<<"\t brand: "<<brand<<endl;
         cout<<"\t speed: "<<speed<<endl;
         cout<<"\n";
     }
};

int main()
{
    car car1,car2;
    car1.id=12345;
    car1.brand="BMW";
    car1.speed=200; 
    car1.display();

    car2.id=54321;
    car2.brand="Audi";          
    car2.speed=220; 
    car2.display();
    return 0;
}