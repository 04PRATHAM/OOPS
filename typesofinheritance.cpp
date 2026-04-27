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
     int c;
     int calculate()
     {
     c=getData()+1;
     return c;
    }
      void display()
      {
        cout<<"value ="<<getData()<<endl;
        cout<<"singke level inheritance"<<endl;
      }
};

class derived2 : public Derived
{ public:
  void display2()
  {
    cout<<"c value ="<<calculate()<<endl;
    cout<<"multilevel inheritance"<<endl;
  }
};

class derived3 : public base,public Derived 
{
    public:
    void display3()
    {
    cout<<"total value"<<Derived::getData()+c<<endl;
      cout<<"multiple inheritance"<<endl;
    }
};
int main()
{
    Derived d;
    d.setData(10);
    d.display();
    derived2 f;
    f.setData(20);
    f.display2();

    derived3 g;
    g.setData(30);
    g.display3();
  return 0; 
}