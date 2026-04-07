//accessing private member data using friend class
#include<iostream>
using namespace std;

class base
{
    private:
      int x;

    public:
    base()
    { 
        x=5;
    }

    friend class derived;
    
};

class derived
{
    public:
      void display(base b)
      {
        cout<<"value = "<<b.x<<endl;
      }
};

int main()
{
    base b;
    derived d;
    d.display(b);
}
