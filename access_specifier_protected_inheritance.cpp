#include<iostream>
using namespace std;    
class base
{
    protected:
    int x;

    public:
    void setData()
    {
        x=2;
    }

    int getData();
    
     
     
};

int base ::getData()
{
    

        return x;
    
}

class Derived : public base
{
    public:
      void display()
      {
        cout<<"value ="<<getData()<<endl;
      }
};

int main()
{
    Derived d;
    d.setData();
    d.display();
}