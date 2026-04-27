#include<iostream>
using namespace std;    
class base
{
    private:
    int x;

    public:
    void setData(int a)
    {
        x=a;
    }

    int getData()
    {
        return x;
    }
     
     
};

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
    d.setData(10);
    d.display();
}