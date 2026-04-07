#include<iostream>
using namespace std;
class vehicle
{
    public:
    int speed;

     void showSpeed();//declaration of member function
     
     
};

void  vehicle::showSpeed()
     {
        cout<<"Speed :"<<speed <<endl;//definition of member function using scope resolution operator
     }
class car : public vehicle
{
    public:
     string brand;
};



int main()
{
    car c1,c2;
    c1.speed=100;
    c1.brand="toyota";
    cout<<"brand: "<<c1.brand<<endl;
    c1.showSpeed();

    c2.speed=220;
    c2.brand="Audi";   
    cout<<"brand: "<<c2.brand<<endl;
    c2.showSpeed();       
    
    cout<<"faster car is : "<<(c1.speed>c2.speed?c1.brand:c2.brand)<<endl;
    
    return 0;
}